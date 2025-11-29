#include <bits/stdc++.h>

using namespace std;

// 返回间隙个数是否大于k
bool check(int dis, vector<int> a, int n, int k, int x, bool out)
{
    int num = 0;
    for (int i = 1; i < n; i++)
    {
        // cout << a[i - 1] << " " << a[i] << " " << dis << endl;
        if ((a[i] - a[i - 1]) > dis)
        {
            if (out)
            {
                cout << (a[i - 1] + a[i]) / 2 << " ";
            }
            num++;
        }
    }
    if (a[0] > 0 && num < k)
    {
        for (int i = 0; num < k && i <= dis; i++, num++)
        {
            if (out)
            {
                cout << i << " ";
            }
        }
    }
    if (a[n - 1] < x && num < k)
    {
        for (int i = a[n - 1] + dis; num < k && i <= x; i++, num++)
        {
            if (out)
            {
                cout << i << " ";
            }
        }
    }

    if (out && num == 0)
    {
        for (int i : a)
        {
            cout << i << " ";
        }
    }
    if (out)
    {
        cout << endl;
    }
    return num > k;
}

void solve()
{
    int n, k, x; // n:好友数量 k:远程传送点数量 x:传送点范围
    cin >> n >> k >> x;
    vector<int> a(n);
    // int karr[k] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    // 不断缩小中间距离，直到能够满足的间隙个数为k
    int kp = 1;
    while (check(kp, a, n, k, x, false))
    {
        kp++;
    }
    check(kp, a, n, k, x, true);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}