#include <bits/stdc++.h>
using namespace std;

int v[1005];

int main(){
    int n,ant = 0; cin >> n;
    for(int i = 0 ; i < n-1; i++) cin >> v[i];
    sort(v, v+n-1);
    for(int i = 0 ; i < n-1 ; i++) {
        if(ant != v[i]-1) {
            cout << v[i]-1;
            return 0;
        }
        ant = v[i];
    }
    cout << n;
    return 0;
}