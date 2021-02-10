#include <bits/stdc++.h>
using namespace std;

int main(){
   
   int n;
   cin >> n;
   
   string r, g;
   cin >> r >> g;
   
   int i, counter = 0;
   for(i = 0 ; i < r.size() ; i++){
       if(r[i] == g[i]){
          counter++; 
       }
   }
   
   cout << counter;
   
    return 0;
}