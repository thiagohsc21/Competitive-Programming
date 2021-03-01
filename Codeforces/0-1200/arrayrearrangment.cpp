#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define pb push_back

ll b[55],a[55];

int main(){
    ll t; 
    cin >> t;
    while(t--){
        ll n,x,flag=0; 
        cin >> n >> x;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int i = 0 ; i < n ; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        for(int i = 0, j = n-1 ; i < n ; i++, j--){
            if(a[i] + b[j] > x){
                cout << "No" << endl;
                flag = 1; break;
            }
        }
        if(flag == 0) cout << "Yes" << endl;
    }
    return 0;
}

