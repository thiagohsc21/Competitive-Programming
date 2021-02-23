#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        long long int x,b = 0;
        int flag = 1;
        cin >> x;
        for(long long int i = 1 ; i*i*i <= x ; i++){
            b = cbrtl(x-(i*i*i));
            if(b*b*b == x-(i*i*i) and b >= 1){
                cout << "YES" << endl;
                flag = 0; 
                break;
            }
        }
        if(flag) cout << "NO" << endl;
    }
    return 0;
} 

