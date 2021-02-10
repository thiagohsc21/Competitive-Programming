#include <bits/stdc++.h>

using namespace std;

int main(){
	
	// 0 esquerda 1 direita
	
	int p, r;
	cin >> p >> r;
	
	if(p == 0) cout << 'C';
	   
    else if(p == 1 and r == 0) cout << 'B';
    
    else if(p == 1 and r == 1) cout << 'A';
	
	return 0;
}