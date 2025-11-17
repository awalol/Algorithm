//
// Created by awalol on 2025/11/12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t,input;
    vector<int> xorA(t);
    vector<int> A(t);
    for (int i =0;i < t;i++) {
        cin >> A[i];
        xorA.push_back(input ^ xorA[i-1]);
    }



    return 0;
}