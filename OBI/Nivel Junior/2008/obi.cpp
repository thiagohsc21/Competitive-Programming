#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,p;
    cin >> n >> p;

    int ans = 0;
    while(n--){
        int x,y;
        cin >> x >> y;

        if(x+y >= p) ans++;
    }

    cout << ans;

    return 0;
}