#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, a=0 , b=0;
	cin >> n;
	
	while(n > 0){
	    
	    int entrada;
	    cin >> entrada;
	    
	    if(entrada == 1 && a == 1) a = 0;
	    else if(entrada == 1 and a == 0) a = 1;
	    
	    else if(entrada == 2 && a == 1 and b == 0){
	        a = 0;
	        b = 1;
	    }  
	    
	    else if(entrada == 2 && a == 1 and b == 1){
	        a = 0;
	        b = 0;
	    }  
	    
	    
	    else if(entrada == 2 && a == 0 and b == 0){
	        a = 1;
	        b = 1;
	    }  
	    
	    else if(entrada == 2 && a == 0 and b == 1){
	        a = 1;
	        b = 0;
	    }  
	    
	    n--;
	}
	
	cout << a << endl << b << endl;
	
    
	return 0;
}