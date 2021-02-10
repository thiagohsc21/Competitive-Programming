#include <bits/stdc++.h>
using namespace std;

int main(){

    string name;
    cin >> name;

    for(int i = 0 ; i < name.size() ; i++){
        if(name[i] != '-'){
            if(name[i] == 'A' || name[i] == 'B' || name[i] == 'C') cout << '2';
            if(name[i] == 'D' || name[i] == 'E' || name[i] == 'F') cout << '3';
            if(name[i] == 'G' || name[i] == 'H' || name[i] == 'I') cout << '4';
            if(name[i] == 'J' || name[i] == 'K' || name[i] == 'L') cout << '5';
            if(name[i] == 'M' || name[i] == 'N' || name[i] == 'O') cout << '6';
            if(name[i] == 'P' || name[i] == 'Q' || name[i] == 'R' || name[i] == 'S') cout << '7';
            if(name[i] == 'T' || name[i] == 'U' || name[i] == 'V') cout << '8';
            if(name[i] == 'W' || name[i] == 'X' || name[i] == 'Y' || name[i] == 'Z') cout << '9';
        }
        else cout << '-';
    }

    return 0;
}