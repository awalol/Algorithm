//
// Created by awalol on 2025/11/9.
//

#include <iostream>

using namespace std;

int main() {
    int T,m;
    cin >> T;
    while (T--) {
        cin >> m;
        cout << m << endl;
        for (int i = 0;i < m;i++) {
            cout << 1;
            if (i != m) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}