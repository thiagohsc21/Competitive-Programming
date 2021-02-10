#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int p,q;
    char c;
    cin >> p >> c >> q;
    
    int ans;
    
    if(c == '+') ans = p+q;
    else ans = p*q;
    
    if(ans > n) cout << "OVERFLOW";
    else cout << "OK";
    
    
    return 0;
}