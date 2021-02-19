#include <bits/stdc++.h>
using namespace std;

int removidos[100005] = {0};

int main(){

    int n, fila[50005]; cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> fila[i];

    int m; cin >> m;

    for(int i = 0 ; i < m ; i++){
        int x; cin >> x;
        removidos[x] = 1;
    }

    for(int i = 0 ; i < n ; i++) if(removidos[fila[i]] == 0) cout << fila[i] << ' ';
    return 0;
}
