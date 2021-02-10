#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int v[10000];
    int v2[10000];
    
    int i,j;
    for(i = 0 ; i < n ; i++) {
        cin >> v[i];
        v2[i] = 1e8;
    }

    for(i = 0 ; i < n ; i++){
        if(v[i] == 0){
            for(j = 0; j < n ; j++) v2[j] = min(v2[j], abs(i-j));
        }
    }
    
    for(i = 0 ; i < n ; i++) cout << min(9, v2[i]) << ' ';
    
    return 0;
}