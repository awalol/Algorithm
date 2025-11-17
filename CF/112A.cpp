//
// Created by awalol on 2025/11/17.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    for (int i = 0;i < s1.size();i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] -= 'A' - 'a';
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z') {
            s2[i] -= 'A' - 'a';
        }
        if (s1[i] < s2[i]) {
            cout << -1;
            return 0;
        }
        if (s1[i] > s2[i]) {
            cout << 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}