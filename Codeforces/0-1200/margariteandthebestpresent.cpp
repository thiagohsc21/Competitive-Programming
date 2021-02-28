#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r,s1,s2,n;
        cin >> l >> r;
        n = l-r+1/2;
        if(n == 0){
            if(l%2 == 0) cout << l << endl;
            else cout << -l << endl;
            continue;
        }
        if(l%2!=0 and r%2!=0){
            s1 = ((-l-r)*(n+1))/2;
            s2 = ((l+r)*n)/2;
        }
        if(l%2==0 and r%2==0){
            s1 = ((-l-r)*n)/2;
            s2 = ((l+r)*(n+1))/2;
        }
        else{
            if(l%2!=0){
                s1 = ((-l-(r-1))*n)/2;
                s2 = (((l+1)+r)*n)/2;
            }
            else{
                s1 = ((-(l+1)-r)*n)/2;
                s2 = ((l+(r-1))*n)/2;
            }
        }
        cout << s1+s2 << endl;
    }
    return 0;
}