#include <bits/stdc++.h>
using namespace std;

int main(){

    int p, d1, d2;
    cin >> p >> d1 >> d2;

    if(p == 0){
        if((d1+d2) % 2 == 0) cout << 0;
        else cout << 1;
    }
    else{
        if((d1+d2) % 2 == 0) cout << 1;
        else cout << 0;
    }
    return 0;
} 