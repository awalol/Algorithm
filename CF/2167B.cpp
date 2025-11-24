#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        bool noequal = false;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i = 0;i < s1.size();i++){
            map1[s1[i]]++;
            map2[s2[i]]++;
        }
        for(pair<char,int> kv : map1){
            if(kv.second != map2[kv.first]){
                cout << "NO" << endl;
                noequal = true;
                break;
            }
        }
        if(!noequal){
            cout << "YES" << endl;
        }
    }
}