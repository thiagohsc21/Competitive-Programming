#include <bits/stdc++.h>
using namespace std;
int c[1005];
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> c[i];
    int i = 0,j = n-1, s = 0, d = 0, k = 1;
    while(i <= j){
        if(c[i] > c[j]){
            if(k%2==0) d +=c[i];
            else s += c[i];
            i++; k++;
        }
        else{
            if(k%2==0) d +=c[j];
            else s += c[j];
            j--; k++;
        }
    }
    cout << s << ' ' << d << endl;
    return 0;
}