#include <bits/stdc++.h>
using namespace std;

int main(){

    int c, p, f;
    cin >> c >> p >> f;

    if((p/c) < f) cout << "N";
    else cout << "S";

    return 0;
}