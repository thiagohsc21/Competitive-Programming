#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int v = 0;
    while(1){
        n--; m--;
        if(n*m >= 1){
            v++;
            continue;
        }
        else break;
    }
    if(v%2 == 0) cout << "Akshat";
    else cout << "Malvika";
    return 0;
}