#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0,s=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin >> a >> b;
        s -= a; s += b;
        if(m < s) m = s;
    }
    cout << m;
    return 0;
}