// 看完解析后感觉挺无语的，没想到还能这么简单
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
        int a[n];
        bool needSort = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != a[0] % 2)
            {
                needSort = true;
            }
        }
        if (needSort)
        {
            sort(a,a + n);
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[n - 1] << endl;
    }

    return 0;
}