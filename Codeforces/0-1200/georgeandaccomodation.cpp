#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        int x,y;
        cin >> x >> y;
        if(abs(x-y) >= 2) ans++;
    }
    cout << ans;
    return 0;
}