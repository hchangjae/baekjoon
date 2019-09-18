/**
* @description
*  
* 
* @author hchangjae
* @contact hcj@payw.org
*/

#include<iostream>
using namespace std;

int main(){

    int test_case;
    int i,j;

    cin >> test_case;

    int k,n,ans;

    for(i=0; i<test_case; i++){

        cin >> k >> n;
        
        ans = 1;
        for(j=n+k-1; j>n-1; j--){
            ans *= j;
        }
        for(j=k; j>1; j--){
            ans /= j;
        }
        
        cout << ans << endl;

    }

    return 0;
}

