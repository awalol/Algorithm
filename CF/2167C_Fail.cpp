#include <bits/stdc++.h>

using namespace std;

bool canSwap(int a,int b){
    return (a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0);
}

bool isBigger(int k[],int a, int b){
    if(a < b){
        return k[a] > k[b];
    }else{
        return k[b] > k[a];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = n - 1;i >= 0;i--){
            for(int j = 0;j < i;j++){
                if(a[j] > a[i] && canSwap(a[i],a[j])){
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
        for(int i = 0;i < n - 1;i++){
            cout << a[i] << " ";
        }
        cout << a[n - 1] << endl;
    }
    return 0;
}