#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0, n, k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) {
        int a,b;
        cin >> a;
        if(a == 0) break;
        else if(a > 0 and i <= k-1) ans++;
        if(i == k-1) b = a;
        if(i > k-1){
            if(a == b) ans++;
        }
    } 
    cout << ans << endl;
    return 0;
}

