#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,d1,v1,n2,d2,v2;
    cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;

    double va = v1/3.6, vb = v2/3.6, t1 = d1/va, t2 = d2/vb;
    if(t1 > t2) cout << n2;
    else cout << n1;

    return 0;
}