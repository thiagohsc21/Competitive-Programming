#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(1){
        n++;
        int a = n/1000, b=n/100, c=n/10, d = n%10;
        b = b%10; c = c%10;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            cout << a << b << c << d;
            break;
        }
    }
    return 0;
}