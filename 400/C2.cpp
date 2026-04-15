#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    set<long long> s;

    for (long long b = 1; b * b <= N; b++) {
        long long x = b * b;
        while (x <= N) {
            s.insert(x);
            if (x > N / 2) break;
            x *= 2;
        }
    }

    cout << s.size() << "\n";
    return 0;
}