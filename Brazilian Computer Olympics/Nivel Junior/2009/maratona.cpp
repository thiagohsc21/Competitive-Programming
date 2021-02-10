#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, d[100005];
    cin >> n >> m;

    for(int i = 0 ; i < n ; i++){

        cin >> d[i];
        if(i == 0) continue;

        if(d[i] - d[i-1] > m){
            cout << 'N';
            return 0;
        }

        if(i == (n-1)){
            if(42195 - d[i] > m){
                cout << 'N';
                return 0;
            }
        }
    }

    cout << 'S';

    return 0;
}