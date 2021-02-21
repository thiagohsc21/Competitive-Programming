#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int w,h,n,ans=1;
        cin >> w >> h >> n;
        if(w%2!=0 and h%2!=0){
            if(n > 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else if(w/2==0 and h/2==0){
            if(w*h >= n) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(w%2!=0 and h%2==0){
            if(h/2==0){
                if(h/2 >= n) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else{

            }
        }
        if(w%2==0 and h%2!=0){
            if(w/2==0){
                if(w/2 >= n) cout << "YES" << endl;
                else cout << "NO" << endl;
            }

        }
    }
    return 0;
}
