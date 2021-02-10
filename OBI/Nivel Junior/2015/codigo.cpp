#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int vet[10000];
    
    int i;
    for(i = 0; i < n; i++) cin >> vet[i];
    
    int cont = 0;
    for(i = 0; i < n-2; i++){
         if(vet[i] == 1 and vet[i+1] == 0 and vet[i+2] == 0) cont++;
    }
    
    cout << cont << endl;
   
   return 0;
}