// 解题方法：暴力循环，但是缩小范围
// 通过数据发现，当a为偶数的时候，找到的x为奇数 这时候 gcd(x,a) == 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long p10 = pow(10,18);
        long long minx = p10;
        while (n--)
        {
            long long num;
            cin >> num;
            long long x = 0;
            // 若a为奇数，那么x为偶数
            if (num % 2 == 0)
            {
                // a为偶数,x为奇数
                x = 3;
            }
            else
            {
                // a为奇数,x为偶数
                x = 2;
            }
            for (; x <= p10; x += 2)
            {
                if (x > minx)
                {
                    break;
                }
                if (__gcd(x, num) == 1 && x < minx)
                {
                    minx = x;
                    break;
                }
            }
        }
        if (minx != p10)
        {
            cout << minx << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}