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

    int N, K;
    cin >> N >> K;

    if(N == 2){
        cout << "YES" << endl;
        cout << "swap 1 2" << endl;
        cout << "swap 1 2" << endl;
        cout << "swap 1 2" << endl;
        cout << "swap 1 2" << endl;
        cout << "swap 1 2" << endl;
    }
    else if(N == 3){
        cout << "NO" << endl;
    }
    else if(N == 4 && K == 1){
        cout << "YES" << endl;
        cout << "swap 1 2" << endl;
        cout << "swap 2 3" << endl;
        cout << "swap 3 4" << endl;
        cout << "swap 1 4" << endl;
        cout << "swap 1 4" << endl;
    }
    else if(N == 4 && K == 3){
        cout << "YES" << endl;
        cout << "swap 3 4" << endl;
        cout << "swap 2 3" << endl;
        cout << "swap 1 2" << endl;
        cout << "swap 1 4" << endl;
        cout << "swap 1 4" << endl;
    }
    else if(N >= 5 && K == 1){
        cout << "YES" << endl;
        cout << "reverse " <<  "1"  << " " << N << endl;
        cout << "reverse " <<  "1"  << " " << N-1 << endl;
        cout << "swap 1 4" << endl;
        cout << "swap 2 3" << endl;
        cout << "reverse 1 4" << endl;
    }
    else if(N >= 5 && N - 1 == K){
        cout << "YES" << endl;
        cout << "reverse " <<  "1"  << " " << N << endl;
        cout << "reverse " <<  "2"  << " " << N << endl;
        cout << "swap 1 4" << endl;
        cout << "swap 2 3" << endl;
        cout << "reverse 1 4" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << "reverse " <<  "1"  << " " << K << endl;
        cout << "reverse " << K + 1 << " " << N << endl;
        cout << "reverse " <<  "1"  << " " << N << endl;
        cout << "reverse " <<  "1"  << " " << N << endl;
        cout << "reverse " <<  "1"  << " " << N << endl;
    }
    return 0;
}
