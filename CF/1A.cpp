//
// Created by awalol on 2025/11/14.
// https://codeforces.com/problemset/problem/1/A
//

#include <iostream>
#include <math.h>

using namespace std;

long long f(double n){
    if(n > (int)n){
        return n + 1;
    }
    return n;
}

int main(int argc, char** argv) {
    long long n,m,a,block = 0;
    cin >> n;
    cin >> m;
    cin >> a;

    block = f((double)n / a);

    block += f((double)(m-a) / a) * block;

    cout << block;

    return 0;
}