#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<char,int> map;
    map['r']++;
    map['p']++;
    if (map['r'] == 1) {
        cout << "test" << endl;
    }
    cout << map['p'] << endl;

    return 0;
}