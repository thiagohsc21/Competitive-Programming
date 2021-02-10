#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int vet[55];
    
    int i;
    for(i = 0; i < n ;i++){
        cin >> vet[i];
    }
    
    int q;
    for(i = 0 ; i < n ; i++){
        q = 0;
        
        if(i != 0) q += vet[i-1];
        q += vet[i];
        if(i != n-1) q += vet[i+1];
        
        cout << q << endl;
    
    }
    
   return 0;
}