#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0, y = 718;
    while(n--){

        int x;
        cin >> x;

        if(x != y) ans++;
        y = x;
    }

    cout << ans;
    return 0;
} 