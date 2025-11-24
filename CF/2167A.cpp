//
// Created by awalol on 2025/11/23.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c,d;
    cin >> n;
    while(n--){
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}