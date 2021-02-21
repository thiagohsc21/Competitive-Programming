#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int h,m;
        cin >> h >> m;
        cout << abs((h-23)*60+(m-60)) << endl;
    }
    return 0;
}