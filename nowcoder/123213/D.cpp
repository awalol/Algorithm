//
// Created by awalol on 2025/11/22.
// https://ac.nowcoder.com/acm/contest/123213/D
//

#include <bits/stdc++.h>

using namespace std;

double func(double x) {
    return 2018 * pow(x, 4) + 21 * x + 5 * pow(x, 3) + 5 * pow(x, 2) + 14;
}

int main() {
    cout << fixed << setprecision(4); // fixed：表示使用定点表示法（而不是科学计数法）来输出浮点数
    int T, Y;
    cin >> T;
    while (T--) {
        double midx = 0.0, midy = 0.0, l = 0, r = 100;
        cin >> Y;
        for (int i = 0; i < 100; i++) {
            midx = (l + r) / 2;
            midy = func(midx);
            if (midy > Y) {
                r = midx;
            } else {
                l = midx;
            }
        }
        if (midx < 0.0001) {
            cout << -1 << endl;
        } else {
            cout << midx << endl;
        }
    }

    return 0;
}
