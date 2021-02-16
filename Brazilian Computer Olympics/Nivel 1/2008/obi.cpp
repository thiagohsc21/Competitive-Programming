#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    int num = 0;
    while(n--){
        int x,y;
        cin >> x >> y;
        if(x+y >= p) num++;
    }
    cout << num;
    return 0;
}