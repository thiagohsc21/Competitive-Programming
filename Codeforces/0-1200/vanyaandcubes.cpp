#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans,sum=0;
    for(int i = 1; ; i++){
        sum += i;
        if(sum <= n){
            ans = i;
            n -= sum;
            continue;
        }
        if(sum > n) break;
    }
    cout << ans;
    return 0;   
} 

