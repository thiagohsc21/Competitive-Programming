#include <bits/stdc++.h>

using namespace std;

int main(){
	//mais latas > copos => cair
	
	int n, sum = 0;
	cin >> n;

	while(n>0){
		int l,c;
		cin >> l >> c;

		if(l>c) sum = sum + c;
		n--;
	}

	cout << sum;

	return 0;
}
