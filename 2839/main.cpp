#include<iostream>

int main(){
    int N,a,b,ans;
    std::cin >> N;
    if(N == 1 || N == 2 || N == 4 || N == 7){
        std::cout << -1;
    }
    else{
        a = N/5;
        N = N%5;
        while(N%3 != 0){
            N += 5;
            a--;
        }
        b = N/3;
        ans = a+b;
        std::cout << ans;
    }
}
// 1 2 4 7 