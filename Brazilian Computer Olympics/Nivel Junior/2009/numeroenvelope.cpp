#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int min = 0;
    for(int i = 0 ; i < n ; i++){

        int var; cin >> var;

        if(i == 0) min = var;
        if(var < min) min = var; 

    }

    cout << min;
    return 0;
}