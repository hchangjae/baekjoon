#include<iostream>

int main(){
    int a,b,c,ans;
    std::cin >> a >> b >> c;
    ans = a/(c-b)+1;
    if((c-b) <= 0){
        std::cout << -1;
    }
    else{
        std::cout << ans;
    }
    
    return 0;
}