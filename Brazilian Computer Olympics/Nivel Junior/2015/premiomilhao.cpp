#include <bits/stdc++.h>

using namespace std;

int main(){
	//soma em 1 m => premio
	
	int n, dias = 0, acesso, soma = 0;
	cin >> n;

	while(n > 0){
		cin >> acesso;

		if(soma < 1000000){
		    soma += acesso;
			dias++;
		}
		n--;
	}

    cout << dias << endl; 
    
	return 0;
}