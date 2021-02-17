#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int d,c,m=0; cin >> d >> c;
    for(int i = 1 ; i < n ; i++){
        int x,y; cin >> x >> y;
        if(log(x)*y > log(d)*c){
            m = i;
            d = x; c = y;
        }
    }
    cout << m;
    return 0;
}
