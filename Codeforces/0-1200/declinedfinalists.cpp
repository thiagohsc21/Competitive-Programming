#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    int m = 0;
    for(int i = 0 ; i < k ; i++){
        int r;
        cin >> r;
        if(m < r) m = r;
    }
    if(m > 25) cout << m-25;
    else cout << 0;
    return 0;
}