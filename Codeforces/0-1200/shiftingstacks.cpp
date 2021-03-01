#include <bits/stdc++.h>
using namespace std;

#define ll long long int
ll h[105];

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,s=0;
        cin >> n;
        for(ll i = 0 ; i < n ; i++){
            cin >> h[i];
            s += h[i];
        }
        ll pa = ((n-1)*n)/2;
        if(s >= pa or n == 1 and ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    // falta verificar se a soma ta bem
    //distribuida ou concentrada
     
    return 0;
}