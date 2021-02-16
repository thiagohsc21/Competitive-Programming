#include <bits/stdc++.h>
using namespace std;
int b[10000] = {0};
int main(){
    int n,k; 
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        int num; 
        cin >> num;
        b[num]++;
    }
    int min = b[1];
    for(int i = 2 ; i <= k ; i++){
        if(b[i]<min) min = b[i];
    }
    cout << min;
    return 0;
}