#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m=0;
    cin >> n;
    if(n%5!=0) m++;
    if(n>=5)m += n/5;
    cout << m;
    return 0;
}