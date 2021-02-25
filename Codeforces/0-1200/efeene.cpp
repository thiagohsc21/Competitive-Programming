#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k,ans=0;
    cin >> n >> k;
    if(k%2 != 0) {
        if(k==1) ans++;
        cout << ans << endl;
        return 0;
    }
    long long int p = n/2, i = n-(n/2);
    if(k == 2){
        if(n%4 == 3 or n%4 == 2) ans = p/2+1;
        if(n%4 == 1 or n%4 == 0) ans = p/2;
    } 
    else if(k == 4){
        if(n%4 == 2 or n%4 == 1) ans = (n-(n/2))/2;
        if(n%4 == 0 or n%4 == 3) ans = (n-(n/2))/2;
    }
    else if(k == 8){
        if(n%4 == 3 or n%4 == 2) ans = p/2; 
        if(n%4 == 1 or n%4 == 0) ans = p/2;  
    }
    else if(k == 6){
        if(n%4 == 2 or n%4 == 1) ans = (n-(n/2))/2;
        if(n%4 == 0 or n%4 == 3) ans = (n-(n/2))/2-1;
    }
    cout << ans;
    return 0;
}