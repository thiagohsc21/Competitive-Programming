#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int  n; 
        cin >> n;
        // 2 4 8 16 [32 64 128 256 512] 1024
        int g = n/2,sum1=0,sum2=0;
        for(int i = n-1 ; i >= g; i--) sum1 += pow(2,i);
        for(int i = 1 ; i < g ; i++) sum2 += pow(2,i);
        sum2 += pow(2,n);
        cout << abs(sum2-sum1) << endl;
    }
    return 0;
}