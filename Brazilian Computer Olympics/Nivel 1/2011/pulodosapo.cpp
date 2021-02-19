#include <bits/stdc++.h>
using namespace std;

int pos[205] = {0};

int main(){
    
    int n,m;
    cin >> n >> m;

    for(int i = 1 ; i <= m ; i++){
        int p,d;
        cin >> p >> d;
        pos[p] = 1;

        for(int j = p+d ; j <= n ; j += d) pos[j] = 1;
        for(int k = p-d ; k >= 1 ; k-= d) pos[k] = 1;
    }

    for(int i = 1 ; i <= n ; i++) cout << pos[i] << '\n';
    return 0;
} 
