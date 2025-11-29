// 该版本的思路是：
// 将每个间隙统计起来，然后排序
// 以及做一些特殊的处理
// 感觉这一版写的还是不够好，对于一些题目还是通过不了
// 1 1 1000000000
// 0
// 1 1 1000000000
// 1000000000

#include <bits/stdc++.h>

using namespace std;

struct s
{
    int l;
    int r;
    int dis;
    s(int l, int r, int dis) : l(l), r(r), dis(dis) {}
};

bool cmp(s s1, s s2)
{
    return s1.dis > s2.dis;
}

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<s> distances;
    int ap = 0;
    int dis = 0;
    for (int l = 0; l <= x; l++)
    {
        if (ap < n && a[ap] == l)
        {
            if (dis != 0)
            {
                distances.push_back(s(l - dis, l, dis));
            }
            dis = 0;
            ap++;
            continue;
        }
        else
        {
            dis++;
        }
    }
    if (dis != 0)
    {
        // 尾部间隙起点应为最后一个朋友位置后的下一个位置
        distances.push_back(s(a[ap - 1] + 1, a[ap - 1] + 1 + dis, dis));
    }
    sort(distances.begin(), distances.end(), cmp);
    if (distances.size() < k)
    {
        if (distances[0].dis > 1 && distances.size() > 0)
        {
            // 特殊处理: 2 4 3 打散distances
            vector<s> newds;
            for (s d : distances)
            {
                for(int i = d.l;i < d.r;i++){
                    newds.push_back(s(i,i + 1,1));
                }
            }
            distances = newds;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            return;
        }
    }
    // cout << "-----------" << endl;
    // cout << "l r dis" << endl;
    // for (s d : distances)
    // {
    //     cout << d.l << " " << d.r << " " << d.dis << endl;
    // }
    // cout << "-----------" << endl;
    for(int i = 0;i < k;i++){
        cout << (distances[i].l + distances[i].r) / 2 << " ";
    }
    cout << endl;
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