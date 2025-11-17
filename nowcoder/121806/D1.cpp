//
// Created by awalol on 2025/11/9.
//

#include <iostream>

using namespace std;

// 当i=l开始，i=r结束，Ai异或的乘积
// 若l=r，返回它本身，因为 a[l] xor 0 = a[l]？存疑
int xorf(int a[],int l,int r) {
    int pref = a[l];
    for (int i = l + 1;i <= r;i++) {
        pref ^= a[i];
    }
    return pref;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    if (t >= 8192) {
        cout << 0 << endl;
        return 0;
    }
    int a[t];
    for (int i = 0;i < t;i++) {
        cin >> a[i];
    }

    int ans = 1;

    // 每个(l,r)区间心动异或的连乘
    // 假设l = 1,r = 3 则
    // (xorf(1,1)*xorf(1,2)*xorf(1,3))*(xorf(2,2)*xorf(2,3))*(xorf(3,3))
    for (int i = 0;i < t;i++) {
        int temp = xorf(a,i,i);
        for (int j = i + 1;j < t;j++) {
            temp = (temp * xorf(a,i,j)) % 1777777777;
        }
        ans *= temp;
    }

    cout << ans << endl;
}