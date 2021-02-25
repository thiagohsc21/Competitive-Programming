#include <bits/stdc++.h>
using namespace std;
long long int num[100005];
int main(){
    long long int n;
    cin >> n;
    long long int ma=0,mi = 10e10;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
        if(num[i] > ma) ma = num[i];
        if(num[i] < mi) mi = num[i]; 
    }
    cout << ma-mi << endl;
    return 0;
}