#include <bits/stdc++.h>
using namespace std;

int main(){

    int maior = 0, x = 333;
    while(x != 0){
        cin >> x;
        if(x > maior) maior = x;
    }

    cout << maior;

    return 0;
}