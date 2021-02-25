
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0, j = n-1; i <= j ; i++, j--){
        if(s[i] != s[j]) ans++;
    }   
    cout << ans;
    return 0;
}