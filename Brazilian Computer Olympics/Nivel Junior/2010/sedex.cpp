#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, l, p;
    cin >> n >> a >> l >> p;

    if(n <= a && n <= l && n <= p) cout << 'S';
    else cout << 'N';

    return 0;
}