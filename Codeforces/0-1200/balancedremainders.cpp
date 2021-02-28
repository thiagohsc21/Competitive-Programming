#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, v[30005], z = 0, o = 0, t = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> v[i];
            if(v[i]%3==0) z++;
            else if(v[i]%3==1) o++;
            else if(v[i]%3==2) t++;
        }
        if(z == o and z == t){
            cout << 0 << endl;
            continue;
        }
        else{
            int num = (z+o+t)/3, m = 0;
            cout << z-num + o-num + t-num;
        }
    }
} 