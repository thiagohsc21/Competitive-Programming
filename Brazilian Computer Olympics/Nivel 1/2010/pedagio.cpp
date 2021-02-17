#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x,y,z,w;
    cin >> x >> y >> z >> w;

    if(x < y) cout << z*x;
    else cout << (x/y)*w + z*x;
    
    return 0;
}