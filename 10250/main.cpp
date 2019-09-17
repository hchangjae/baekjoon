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
    int i;

    cin >> test_case;

    int H,W,N,ans;

    for(i=0; i<test_case; i++){

        cin >> H >> W >> N;

        ans = 101;
        
        ans += (N-1)/H;
        ans += ((N-1)%H) * 100;

        cout << ans << endl;
    }
    
    return 0;
}