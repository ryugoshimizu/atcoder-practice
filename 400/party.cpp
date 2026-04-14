#include <bits/stdc++.h>
using namespace std;

int main() {
    int A;
    cin >> A;

    if (400 % A == 0) cout << 400 / A << '\n';
    else cout << -1 << '\n';

    return 0;
}