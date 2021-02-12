#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y,a,b;
    cin >> x >> y >> a >> b;

    if((x*y) > (a*b)) cout << x*y;
    else cout << a*b;

    return 0;
} 