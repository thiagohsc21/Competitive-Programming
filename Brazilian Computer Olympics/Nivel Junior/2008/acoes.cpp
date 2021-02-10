#include <bits/stdc++.h>
using namespace std;

int vec[100005];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i <=3 ; i++) cin >> vec[i];

    int maior = 0, sum = 0;
    for(int i = 4; i <= n ; i++){

        if(i != n) cin >> vec[i];

        sum = vec[i-4] + vec[i-3] + vec[i-2] + vec[i-1];
        if(i == 4) maior = sum;

        if((sum >= 0 && sum > maior) || (sum < 0 && maior < 0 && sum < maior)) maior = sum;

    }

    cout << maior << '\n';
    return 0;
}