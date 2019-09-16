/*
f(k)는 k번째 이동 때 이동할 수 있는 거리
f(k) = k

Σf(k)는 k번 이동할 때 최대 이동할 수 있는 거리
Σf(k) = k(k+1)/2
Σf(k) = 1, 3, 6, 10 ...

우주선은 마지막에 이동거리가 1이어야 하므로 y-1거리까지만 생각한다.
y-1 <= Σf(k) + x
를 만족할 때 까지 while문을 이용해 k를 찾는다

총 이동 횟수는 k + 1

*/

#include<iostream>
using namespace std;

int main(){

    int test_case;
    int i;

    cin >> test_case;

    long long x,y,ans;
    long long k;


    for(i=0; i<test_case; i++){
        cin >> x >> y;
        
        k=0;
        while(y-x > k*k+k){
            k++;
        }
        if(y-x <= k*k){
            ans = 2*k-1;
        }
        else{
            ans = 2*k;
        }

        // if(x == y)
        //     ans = 0;

        cout << ans << "\n";
    }

}