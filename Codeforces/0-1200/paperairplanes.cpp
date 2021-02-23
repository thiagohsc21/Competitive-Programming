#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,s,p;
    cin >> k >> n >> s >> p;
    int q = (n-1)/s + 1, tot = q*k;
    cout << (tot-1)/p + 1;
    return 0;
} 