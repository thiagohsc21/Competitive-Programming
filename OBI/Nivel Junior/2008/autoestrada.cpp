#include <bits/stdc++.h>
using namespace std;

int main(){

    int c;
    cin >> c;

    int ans = 0;
    while(c--){
        char ref;
        cin >> ref;

        if(ref == 'P' || ref == 'C') ans += 2;
        else if(ref == 'A') ans += 1; 
    }

    cout << ans;
    return 0;
}