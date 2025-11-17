//
// Created by awalol on 2025/11/9.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int line = 0;line < n;line++) {
        for (int i = 0; i < n * 2 + 1; i++) {
            if (i == line) {
                cout << "\\";
            } else if (i == n) {
                cout << "|";
            } else if (i == n * 2 - line) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0;i < n;i++) {
        cout << "-";
    }
    cout << "O";
    for (int i = 0;i < n;i++) {
        cout << "-";
    }
    cout << endl;
    for (int line = n - 1;line >= 0;line--) {
        for (int i = 0; i < n * 2 + 1; i++) {
            if (i == line) {
                cout << "/";
            } else if (i == n) {
                cout << "|";
            } else if (i == n * 2 - line) {
                cout << "\\";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
