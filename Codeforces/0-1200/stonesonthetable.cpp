#include <bits/stdc++.h>
using namespace std;
char v[55] = {0};
int main(){
    int n,a=0,ans=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        if(v[i] == a) ans++;
        else a = v[i];
    }
    cout << ans;
    return 0;
}
