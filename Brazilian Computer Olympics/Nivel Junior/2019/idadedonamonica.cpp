#include <bits/stdc++.h>
using namespace std;

int main(){

    int m,f1,f2,f3;
    cin >> m >> f1 >> f2;

    f3 = m - f1 - f2;

    if(f3 > f1 && f3 > f2) cout << f3;
    else if(f2 > f1 && f2 > f3) cout << f2;
    else cout << f1;

    return 0;
} 