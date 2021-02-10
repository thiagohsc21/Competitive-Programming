#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int m[1005][1005];
    
    int l[n] = {0}, c[n] = {0}; 
    
    int i ,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> m[i][j];
            l[i] += m[i][j];
            c[j] += m[i][j];
        }
        
    }

    int soma = 0, ans = 0;
    for(i = 0; i < n; i++){
        for(j = 0 ; j < n; j++){
            soma += l[i] + c[j] - (2*m[i][j]);
            if(soma > ans) ans = soma;
            soma = 0;
        }
    }
    
    cout << ans;
    return 0;
}