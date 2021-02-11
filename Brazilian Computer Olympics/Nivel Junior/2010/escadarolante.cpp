#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int tempo = 0, anterior = 0;
    for(int i = 0 ; i < n ; i++){

        int atual;
        cin >> atual;

        if(i>0) {
            if(atual-anterior < 10) tempo += atual-anterior;
            else tempo += 10;
        }
        anterior = atual;
    }

    cout << tempo+10;
    return 0;

}