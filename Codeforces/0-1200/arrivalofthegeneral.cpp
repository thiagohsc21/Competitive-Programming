#include <bits/stdc++.h>
using namespace std;
int k[100];
int main(){
    int n, vmax, vmin, a = 0, b = 0;
    cin >> n;
    vmax=0; vmin=10e6;
    for(int i = 0 ; i < n ; i++){
        cin >> k[i];
        if(k[i] > vmax) {
            vmax = k[i];
            a = i;
        }
        if(k[i] <= vmin){
            vmin = k[i];
            b = i;
        }
    }
    if(a < b) cout << abs(b-n+1)+a;
    else cout << abs(b-n+2)+a;
    return 0;
}