//
// Created by awalol on 2025/11/14.
// https://codeforces.com/problemset/problem/158/A
//
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,k,pass = 0,min = 0;
    cin >> n;
    cin >> k;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(),greater<int>());

    min = a[0];
    if (min == 0) {
        cout << 0;
        return 0;
    }
    for (int i = 0;i < n;i++) {
        int c = a[i];
        if (c <= 0) {
            break;
        }
        if (c == min || pass < k) {
            pass++;
            min = c;
        }
    }

    cout << pass;

    return 0;
}