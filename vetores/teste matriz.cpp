#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int N , M;

    cin >> N >> M;

    int P[N],G[N],C[N];

    for(int i = 0;i < N; i++){
    cin >> P[i] >> G[i] >> C[i];

    total +=P[i]*4 + G[i]*9 + C[i]*4;
    }

    res = M - total;
    
    return 0;

}
