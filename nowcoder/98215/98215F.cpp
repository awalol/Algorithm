//
// Created by awalol on 2025/11/17.
// https://ac.nowcoder.com/acm/contest/98215/F
// 未通过
//
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void win(char c) {
    switch (c) {
        case 'r':
            cout << "kou";
            exit(0);
        case 'p':
            cout << "yukari";
            exit(0);
    }
}

int main() {
    // 横 竖 斜对角 有四个旗子则胜利

    // ----m----
    // |
    // |
    // |
    // n
    // |
    // |
    // |

    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    unordered_map<char,int> map1;
    unordered_map<char,int> map2;
    unordered_map<char,int> map3;
    unordered_map<char,int> map4;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        map2.clear();
        for (int j = 0;j < m;j++) {
            map2[s[i][j]]++;
            if (map2[s[i][j]] == 4) {
                win(s[i][j]);
            }
            if (i >= 1) {
                if (s[i][j] == s[i - 1][j]) {
                    map1[s[i][j]]++;
                }
                if (map1[s[i][j]] == 4) {
                    win(s[i][j]);
                }
                if (j >= 1) {
                    if (s[i][j] == s[i - 1][j - 1]) {
                        map3[s[i][j]]++;
                    }
                    if (map3[s[i][j]] == 3) {
                        win(s[i][j]);
                    }
                }
            }
        }
        for (int j = m - 1;j >= 0;j++) {
            if (i >= 1) {
                if (s[i][j] == s[i - 1][j + 1]) {
                    map4[s[i][j]]++;
                }
                if (map4[s[i][j]] == 3) {
                    win(s[i][j]);
                }
            }
        }
    }

    return 0;
}
