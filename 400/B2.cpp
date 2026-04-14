#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, X = 0, temp = 1;
    int M;
    const long long lim = 1000000000;
    cin >> N >> M;
    for (int i = 0; i <= M; i++) {
        X += temp;
        if (X > lim) {
            cout << "inf\n";
            return 0;
        }
        if (i < M && temp > lim / N) {
            cout << "inf\n";
            return 0;
        }
        temp *= N;
    }
    cout << X << '\n';
}