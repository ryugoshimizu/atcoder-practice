#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    double X = N * (1 - pow(N,M)) / (1 - N);
    if( X <= pow(10,9)){
        cout << X << "\n";
    }else{
        cout << "inf" << "\n";
    }
    return 0;
}