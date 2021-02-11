#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,x,y,z;
    cin >> a >> b >> c >> x >> y >> z;

    if(a > x || b > y || c > z) {
        cout << 0;
        return 0;
    }

    int ans = (x/a) * (y/b) * (z/c);
    cout << ans;

    return 0;
}