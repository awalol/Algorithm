//
// Created by awalol on 2025/11/17.
// https://ac.nowcoder.com/acm/contest/98215/F
//
#include <iostream>
#include <vector>

using namespace std;

bool row(string s) {
    for (int i = 0;i < s.size() - 4;i++) {
        if (i + 4 > s.size()) {
            break;
        }
        int temp = 0;
        for (int j = 0;j < 3;j++) {
            if (s[j] == s[j + 1]) {
                temp++;
            }
        }
        if (temp == 3) {
            return true;
        }
    }

    return false;
}

bool column(vector<string> s) {
    return false;
}

int main() {
    // 横 竖 斜对角 有四个旗子则胜利

    // ----n----
    // |
    // |
    // |
    // m
    // |
    // |
    // |

    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0;i < n;i++) {
        cin >> s[i];
    }

    // for (int i = 0;i < m - 4;i++) {
    //     int count = 0;
    //     for (int j = i;j < 3;j++) {
    //         if (s[j])
    //     }
    // }

    /*for (int k = 0;k < m - 4;k++) {
        for (int i = 0;i < m - n;i++) {
            char initChar = s[k][i];
            if (initChar == '.') {
                continue;
            }
            int temp = 0;
            for (int j = 1;j < i + 4;j++) {
                if (s[j][j + i] == initChar) {
                    temp++;
                }
            }
            if (temp == 4) {
                switch (initChar) {
                    case 'r':
                        cout << "kou";
                        return 0;
                    case 'p':
                        cout << "yukari";
                        return 0;
                }
            }
        }
    }*/

    return 0;
}