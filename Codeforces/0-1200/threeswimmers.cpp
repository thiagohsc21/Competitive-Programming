#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        long long int p,a,b,c,k1,k2,k3;
        cin >> p >> a >> b >> c;
        if(p>=a)k1 = a*(((p-1)/a) + 1)-p;  
        else k1 = a-p;
        if(p>=b)k2 = b*(((p-1)/b) + 1)-p; 
        else k2 = b-p;
        if(p>=c)k3 = c*(((p-1)/c) + 1)-p; 
        else k3 = c-p;

        if(k1 > k2) swap(k1,k2);
        if(k1 > k3) swap(k1,k3);
        cout << abs(k1) << endl;
    }
    return 0;
}
