//
// Created by awalol on 2025/11/14.
//

#include <iostream>

using namespace std;

int main() {
    int x = 0,y = 0,in,oper = 0;
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= 5;j++) {
            cin >> in;
            if (in == 1) {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 3) + abs(y - 3);

    return 0;
}