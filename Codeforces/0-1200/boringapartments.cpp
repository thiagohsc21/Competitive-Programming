#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int c = x[0] - '0', r = 0, l = 1;
        if(x[0] != '1') r = (c-1)*10;
        if(x.size() == 2) l += 2;
        else if(x.size() == 3) l += 5;
        else if(x.size() == 4) l += 9; 
        cout << r+l << endl;
    }
    return 0;
}