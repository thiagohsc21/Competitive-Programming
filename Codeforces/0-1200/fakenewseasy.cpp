#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string k = "heidi";
    int j = 0, ant = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == k[j]){
            j++;
            ant = i;
        }
        if(ant > 1);
    }
} 

