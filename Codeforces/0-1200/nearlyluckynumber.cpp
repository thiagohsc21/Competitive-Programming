#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int d = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '4' or s[i] == '7') d++;
    }
    if(d == 4 or d == 7) cout << "YES";
    else cout << "NO";
    return 0;
}
