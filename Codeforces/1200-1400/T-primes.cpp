#include <bits/stdc++.h>
using namespace std;
int prime(long long aux){
    if(aux == 1) return 0;
    for(long long i = 2 ; i*i <= aux ; i++){
        if(aux%i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    long long ant = 0;
    while(n--){
        long long x,aux;
        cin >> x;
        if(x%2==0 and x!=4){
            cout << "NO" << endl;
            continue;
        }
        if(x == ant){
            cout << "YES" << endl;
            continue; 
        }
        aux = sqrtl(x);
        if(x == aux*aux){
            if(prime(aux)) {
                cout << "YES" << endl;
                ant = x;
            }
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}

