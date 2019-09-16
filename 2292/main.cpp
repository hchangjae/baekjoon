#include<iostream>

using namespace std;

/* 
    f(k){ // k == 벌집의 깊이
        k==0) 1
        k>=1) 6k
    }
*/
// Σf(k-1) <= N <= Σf(k)
// 3(k-1)k+2 <= N <= 3k(k+1)+1

int main(){
    int N,ans;
    int k;
    cin >> N;
    k=0;
    while(N > 3*k*(k+1)+1){
        k++;
    }
    
    ans = k+1; // 깊이 1에서는 0번 움직여야 하기때문

    cout << ans;
}