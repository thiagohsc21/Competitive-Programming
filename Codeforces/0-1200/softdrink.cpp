#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml = k*l, slices = c*d, toasts = min((ml/nl), slices);
    toasts = min(toasts, p/np);
    cout << toasts/n;
    return 0;
}
