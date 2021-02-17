#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n <= 10) cout << 7;
    else if(n > 10 && n <= 30) cout << (n-10)*1+7;
    else if(n > 30 and n <= 100) cout << (n-30)*2+27;
    else if(n > 100) cout << (n-100)*5+167;

    return 0;
}