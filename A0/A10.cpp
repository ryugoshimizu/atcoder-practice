#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    for (int = 0;i < N; i++){
        cin >> A[i];
    }
    int D;
    for (int = 0;i < D; i++){
        cin >> L[i] >> R[i];
    }
    for (int = 0;i < D; i++){
        cout << max(prefixMax[L-1], suffixMax[R+1]) << "\n";
    }
}