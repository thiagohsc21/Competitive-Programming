#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    int ans = 0, tempo[105], sum = 0, sum_ant = 0;
    for(int i = 1 ; i < n+1 ; i++){

        for(int j = 0 ; j < m ; j++) {
            cin >> tempo[j];
            sum += tempo[j];
        }
        
        if(i == 1) ans = i;
        else if(sum < sum_ant) ans = i;

        sum_ant = sum;
        sum = 0;
    }

    cout << ans;

    return 0;
}