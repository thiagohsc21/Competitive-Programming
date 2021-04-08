#include <bits/stdc++.h>
using namespace std;

#define ll long long int
ll v[100005] = {0};

void find_mex(ll *mex){
     for(ll i = *mex ; ; i++) {
        if(v[i] == 0) {
            *mex = i;
            break;
        }
    }
}

void resolution(){
    ll n,k,max=0,mex=0,ans=0;
    cin >> n >> k;
    for(ll i = 0 ; i < n ; i++){
        ll p; cin >> p;
        if(p > max) max = p;
        v[p]++;  
    }
    find_mex(&mex);
    for(ll i = 0 ; i < k ; i++){
        ll a = ((max+mex-1)/2)+1;
        if(v[a] == 0) {
            v[a]++; ans++;
            if(a > max) max = a;
            if(a == mex) find_mex(&mex);
        }
    }
    for(ll i = 0 ; i <= max ; i++) v[i] = 0;
    cout << ans+n << endl;
}

int main(){
    int t; cin >> t;
    while(t--) resolution();
    return 0;
}