#include <bits/stdc++.h>
using namespace std;

int main(){
    string k;
    cin >> k;
    int dif = 0;
    for(int i = 0 ; i < k.size() ; i++){
        if(k[i] != '1'){
            dif++;
            for(int j = i+1 ; j < k.size() ; j++){
                if(k[i] == k[j]) k[j] = '1';
            }
        }
    }
    if(dif % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}