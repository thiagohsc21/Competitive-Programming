#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int n,q,one=0,zero=0;
    cin >> n >> q;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        if(a[i] == 1) one++;
        else zero++;
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(x == 1){
            a[y-1] = 1-a[y-1];
            if(a[y-1] == 1) {
                one++; 
                zero--;
            }
            else {
                zero++; 
                one--;
            }
        }
        else{
            if(y > one) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}