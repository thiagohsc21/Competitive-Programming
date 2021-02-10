#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[15][15];
    
    int n;
    cin >> n;
    
    int i,j;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n; j++){
            cin >> m[i][j];
        }
    }
    
    int l[15] = {0}, c[15] = {0}, d[15] = {0}, cont = 0;
    for(i = 0 ; i < n ; i++){

        for(j = 0 ; j < n; j++){
            
            l[i] += m[i][j];
            c[i] += m[j][i];
        }
        if(i != 0 and l[i] != l[i-1] and cont == 0) cont++;
        if(i != 0 and c[i] != c[i-1] and cont == 0) cont++;
    }
    
    for(i = 0 , j = 0 ; i < n and j < n ; i++, j++) d[0] += m[i][j];
    for(i = 0 , j = n-1 ; i < n and j >= 0 ; i++, j--) d[1] += m[i][j];
    
    if(d[0] != d[1] and cont == 0) cont++;
    
    if(cont == 0 and (l[1] != c[1] or l[1] != d[1] or c[1] != d[1])) cont++;
    
    if(cont != 0) cout << -1;
    else cout << l[1];
    
    return 0;
}