#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,s;
    cin >> n >> s;

    int sum = s, min;
    for(int i = 0 ; i < n ; i++){
        int v; 
        cin >> v;

        sum += v;
        if(i == 0) min = s;
        if(sum < min) min = sum;
    }

    cout << min;
    return 0;
}