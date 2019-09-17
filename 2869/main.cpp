/**
* @description
* 해당 문제는 while문을 반복하면 시간초과가 걸린다.
* 따라서 계산을 통한 효율적인 알고리즘을 사용해야한다.
* -
* 달팽이 문제의 핵심은 처음과 마지막에 있다.
* 달팽이는 아침에 A만큼 올라갔다가 저녁에 B만큼 내려온다.
* 마지막 지점에서는 A만큼 올라가기만 하고 내려오지 않는다. 이게 핵심이다.
* 그래서 하루에 A-B만큼 움직인다고 생각하면 틀리기 쉽다.
* -
* 먼저 첫날에 A만큼 이동한 후, 그 다음에 A-B만큼 움직인다고 생각하면 해결된다.
* 높이 V는 V-A가 되고 그날부터는 달팽이가 내려갔다가 올라가게된다.
* 그렇기 때문에 마지막에 아까와 같은 문제가 생기지 않는다.
* 
* @author hchangjae
* @contact hcj@payw.org
*/

#include<iostream>
using namespace std;

int main(){

    int A,B,V,ans;
    int diff;

    cin >> A >> B >> V;
    
    // 한번에 올라갈 수 있는 경우
    if( A >= V ){
        cout << 1;
        return 0;
    }

    // 첫날 올라간 거리
    V -= A;
    ans = 1;
    
    // 내려갔다 올라가는 거리
    diff = A-B;

    ans += V/diff;

    // 거리가 조금 남은 경우
    if(V%diff != 0){
        ans++;
    }

    cout << ans;

    return 0;
}