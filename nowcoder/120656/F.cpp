// https://ac.nowcoder.com/acm/contest/120656/F

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m,count = 0;
    cin >> n >> m; //n 代表数列牌数，m 代表 Jocker 牌数
    vector<int> c(n);
    for(int i = 0;i < n;i++){
        cin >> c[i];
    }
    c.push_back(m);
    //     sort(c.begin(),c.end(),greater<int>());
    int num = 0;
    int zero = 0;
    while(c[c.size() - 1]){
        num = 0;
        for(int i = zero;i < c.size();i++){
            int temp = c[i];
            if(temp > 0 && num < n){
                num++;
                c[i]--;
            }
            if(c[i] == 0){
                zero = i + 1;
            }
        }
        if(num == n){
            count++;
        }else{
            break;
        }
    }
    cout << count;


    return 0;
}