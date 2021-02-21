#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int k,n,w,t=0;
    cin >> k >> n >> w;
    for(int i = 1 ; i <= w ; i++) t += k*i;
    if(t <= n) cout << 0;
    else cout << abs(t-n);
    return 0;
}