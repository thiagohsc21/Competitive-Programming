#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        string k;
        cin >> k;
        if(k.size() > 10) cout << k[0] << k.size()-2 << k[k.size()-1] << endl;
        else cout << k << endl;
    }
    return 0;
}

