#include <bits/stdc++.h>
using namespace std;
int s[200005];
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> s[i];
    int ind = 0, k = n;
    while(n--){
        int m, moves = 0; 
        cin >> m;
        for(int i = ind; i < k; i++){
            moves++;
            cout << i << ' ';
            if(s[i] == m){
                ind = i+1;
                break;
            }
        }
        cout << endl;
        cout << "moves" << moves << endl;
    }
}
