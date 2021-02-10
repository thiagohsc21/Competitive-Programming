#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    
    int temp, tempc = 0, count = 0, ans;
    while(n > 0){
        int var;
        cin >> var;
            
        if(temp == var || count == 0){
            count++;

                if(count > tempc){
                    ans = count;
                    tempc = count;
                }
        }
        else  count = 1;
 
        temp = var;
        n--;
    }
    
    cout << ans << endl;

    return 0;
}