#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    for( int i = 0 ; i < n ; i ++){
        int x,y,z;
        cin >> x >> y >> z;
        if(x+y+z > 1) ans++;
    }
    cout << ans;
    return 0;
}