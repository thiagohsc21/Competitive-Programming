#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        if(a<b) swap(a,b);
        if(a<c) swap(a,c);
        int v = (a-b) + (a-c);
        if(v > n) cout << "NO" << endl;
        else if(abs(n-v)%3==0) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}