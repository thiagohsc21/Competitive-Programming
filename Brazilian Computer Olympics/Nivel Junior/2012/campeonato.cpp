#include <bits/stdc++.h>
using namespace std;

int main(){

    int Vc, Ec, Gc, Vf, Ef, Gf; 
    cin >> Vc >> Ec >> Gc >> Vf >> Ef >> Gf;

    int Pc, Pf;
    Pc = Vc*3 + Ec*1;
    Pf = Vf*3 + Ef*1;

    if(Pc != Pf){
        if(Pc > Pf) cout << 'C';
        else cout << 'F';
    }
    else{
        if(Gc > Gf) cout << 'C';
        else if(Gc < Gf) cout << 'F';
        else cout << '=';
    }

    return 0;
}