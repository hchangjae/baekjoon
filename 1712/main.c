#include<stdio.h>

int main(){
    
    int a,b,c;
    int ans;
    scanf("%d %d %d",&a, &b, &c);

    if(c-b <= 0){
        printf("-1\n");
    }
    else{
        ans = (int)(a/(c-b));
        ans++;
        printf("%d",ans);
    }
    
}