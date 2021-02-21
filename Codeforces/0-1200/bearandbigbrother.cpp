#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,b;
    cin >> l >> b;
    for(int i = 1 ; ; i++){
        l = l*3;
        b = b*2;
        if(l > b){
            cout << i;
            break;
        }
    }
    return 0;
}   