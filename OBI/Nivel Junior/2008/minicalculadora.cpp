#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,d,q;
    cin >> n >> d >> q;

    int mdc = 1;
    for(int i = 2 ; i <= min(d,q) ; i++){
        if(d%i == 0 && q%i == 0) mdc = i;
    }

    d /= mdc;
    q /= mdc;

    if(max(d,q) > n) cout << "IMPOSSIVEL\n";
    else cout << d << ' ' << q << '\n';

    return 0;
}