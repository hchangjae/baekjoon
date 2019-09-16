/*
k는 분수의 깊이다.
ex) 1번:1, 2-3번:2, 4-6번:3 
f(k) = k
Σf(k) = k(k+1)/2

while문 돌려서 N의 깊이 찾기
(k-1)k/2 <= N <= k(k+1)/2

해당 깊이에서 위치 찾기
rest = k(k+1)/2 - N

깊이가 짝수냐 홀수냐에 따라서 오름차순으로 증가, 내림차순으로 증가함
if(k%2 == 1)
    N = (rest+1)/(k-rest)
if(k%2 == 0)
    N = (k-rest)/(rest+1)
*/

#include<iostream>
using namespace std;

int main(){

    int N;
    int k,rest;
    cin >> N;

    k=0;
    while(N > k*(k+1)/2){
        k++;
    }
    rest = k*(k+1)/2 - N;

    if(k%2 == 1)
        cout << rest+1 << "/" << k-rest;
    if(k%2 == 0)
        cout << k-rest << "/" << rest+1;

    return 0;
}