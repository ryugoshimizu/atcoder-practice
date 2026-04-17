#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K, A = 0, sA;
    cin >> N >> K;
    for (int i = 0; i < N; i++){
        if (i < K){
            A += 1;
        } else {
            A *= 2;
        }
    }
    long long inf = 1000000000
    sA = A % inf;
    cout << sA << "\n";
    return 0;
}