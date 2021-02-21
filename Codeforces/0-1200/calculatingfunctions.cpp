#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    //f(1) = -1 f(2) = 1 f(3) = -2 f(4) = 2 f(5) = -3 f(6) = 3 => f(n-1) = -1+(n/2) f(n) = n/2;
    if(n%2 == 0){
        long long int k = n/2;
        cout << k;
    }
    else{
        long long int k = n/2;
        cout << -(1+k);
    }
    return 0;
}