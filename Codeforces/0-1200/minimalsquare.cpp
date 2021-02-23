#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a < b) swap(a,b);
        if(2*b >= a) cout << 4*b*b << endl;
        else cout << a*a << endl;
    }
    return 0;
} 