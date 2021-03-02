#include <bits/stdc++.h>
using namespace std;

#define ll long long int
ll h[105];

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,s=0,sum=0,flag=0;
        cin >> n;
        for(ll i = 0 ; i < n ; i++){
            cin >> h[i];
            s += h[i]; sum+=i;
            if(s < sum) flag = 1;
        }
        if(flag == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }ma
    return 0;
}