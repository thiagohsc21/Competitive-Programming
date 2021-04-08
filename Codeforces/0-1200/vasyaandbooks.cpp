#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

int main(){
    int n; cin >> n;
    stack <int> b;
    for(int i = 0 ; i < n ; i++) {
        int k; cin >> k;
        b.push(k);
    }
    // 1 2 3
    // 2 1 3 
    while(n--){
        int x, ans = 0; cin >> x;
        if(binary_search())
            while(b.top() != x){
                b.pop(); ans++;
            }
            if(b.top() == x){
                
            }
    }
    return 0;
}