#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long int x,y,z,m,m1,m2;
    cin >> x >> y >> z;

    if(x < y + z and z < y + x and y < x + z){ 

        m = x; m1 = y; m2 = z;
        if(m < m1) swap(m,m1);
        if(m < m2) swap(m,m2);

        //  m² = m1² + m2² - 2m1m2cosk
        //  if(k > 90 => -2m1m2cosk > 0 => m² > m1²+m2² {o})  
        //  if(k < 90 => -2m1m2cosk < 0 => m² < m1²+m2² {a})
        //  if(k = 90 => -2m1m2cosk = 0 => m² = m1²+m2² {r})

        if(m*m == m1*m1 + m2*m2) cout << 'r';
        else if(m*m < m1*m1 + m2*m2) cout << 'a';
        else if(m*m > m1*m1 + m2*m2) cout << 'o';
    }

    else cout << 'n';
    return 0;
} 
