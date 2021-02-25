#include <bits/stdc++.h>
using namespace std;
int v[1005] = {0};
int main(){
    int n;
    cin >> n;
    int ma = 0;
    for(int i = 0 ; i < n ; i++){
        string k;
        cin >> k;
        v[k.size()]++;
        if(k.size() > ma) ma = k.size();
    }
    int ans = 0, aux = 0;
    for(int i = 1 ; i <= ma ; i++){
        if(v[i] > aux) {
            aux = v[i];
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}