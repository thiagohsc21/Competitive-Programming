#include <bits/stdc++.h>

using namespace std;

int main(){
	//p1 c1 = p2 c2 => mesmo momento e sentidos opostos

	int p1,c1,p2,c2;
	cin >> p1 >> c1 >> p2 >> c2;
	
	if(p1*c1 == p2*c2) cout << 0;

	else{
		if(p1*c1 > p2*c2) cout << -1;
		else cout << 1;
	}
	
	return 0;
}