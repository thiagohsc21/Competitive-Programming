#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 0;
    for(int i = 0 ; i < n ; i++){
        int x,y,a,b;
        cin >> x >> y >> a >> b;
        k += (abs(x-a)*abs(x-a)+abs(y-b)*abs(y-b));
    }    
    cout << k;
    return 0;
}