//
// Created by awalol on 2025/11/5.
// https://ac.nowcoder.com/acm/contest/98215/D
//

#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    string happy = ":-)";
    int happyNum = 0;
    string sad = ":-(";
    int sadNum = 0;
    getline(cin,str);
    for (int i = 0; i < str.size(); i++) {
        string c = str.substr(i, 3);
        if (c == happy) {
            happyNum++;
        }else if (c == sad) {
            sadNum++;
        }
    }

    if (happyNum == sadNum) {
        if (happyNum == 0) {
            cout << "None";
            return 0;
        }
        cout << "Just so so";
        return 0;
    }

    if (happyNum > sadNum) {
        cout << "Happy";
    }else if (sadNum > happyNum) {
        cout << "Sad";
    }

    return 0;
}
