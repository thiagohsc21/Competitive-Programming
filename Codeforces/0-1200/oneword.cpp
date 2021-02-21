#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a=0,b=0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 'a') b++;
        else a++;
    }
    if(a>b){
        for(int i = 0 ; i < s.size() ; i++) if(s[i] >= 'a') s[i] = toupper(s[i]);
        cout << s;
    }
    else{
        for(int i = 0 ; i < s.size() ; i++) if(s[i] < 'a') s[i] = tolower(s[i]);
        cout << s;
    }
    return 0;
}
