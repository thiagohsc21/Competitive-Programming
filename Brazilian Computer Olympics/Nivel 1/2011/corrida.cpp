#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int carro, tempo;
} info_t;

info_t p[105];

int main(){

    int n,m,k;
    cin >> n >> m;

    for(int i = 1 ; i <= n ; i++){
        int sum = 0;
        for(int j = 0 ; j < m ; j++){
            cin >> k;
            sum += k;
        }   
        p[i].carro = i;
        p[i].tempo = k;
    }

    //sort nos tempos da struct 

    for(int i = 0 ; i < 3 ; i++) cout << p[i].carro;
    return 0;
}