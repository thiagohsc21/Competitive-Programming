#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,x,y,r,ans=0;
    cin >> n >> x;

    if(n > 2) cin >> y;
    r = y-x;
    
    for(int i = 2; i < n ; i++){
        int flag = 0;
        if(y-x != r) {
            ans++;
            flag = 1;
        }
        x = y;
        cin >> y;
        if(flag == 1) r = y-x;
        if(i == n-1) if(y-x != r) ans++;
    }

    cout << ++ans;
    return 0;
}