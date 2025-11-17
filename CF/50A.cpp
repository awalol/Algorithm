//
// Created by awalol on 2025/11/14.
// https://codeforces.com/problemset/problem/50/A
//
#include <iostream>

using namespace std;

int main() {
    int M,N,count = 0;
    cin >> M;cin >> N;

    if (M >= 2) {
        count = M / 2;
        if (N > 1) {
            count *= N;
        }
    }
    if (M % 2 != 0 && N >= 2) {
        count += N / 2;
    }

    cout << count;

    return 0;
}