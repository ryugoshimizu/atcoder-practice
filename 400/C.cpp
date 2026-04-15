#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main() {
    long long N, a, b, X = 0;
    int count = 0;
    cin >> N;
    a = log2(N);
    b = pow((N/2),1/2);
    for(int B = 1; B < b; B++){
        long long A = 2;
        X = A * B * B;
        if (X <= N){
            count += 1;
        }
        for(int j = 0; j < a; j++){
            A *= 2
            X = A * B * B;
            if (X <= N){
                count += 1;
            }else{
                break;
            }
        }
    }
    cout << count;
    return 0;
}