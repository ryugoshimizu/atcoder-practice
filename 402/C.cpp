#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(M);
    for (int i = 0; i < M; i++) {
        int K;
        cin >> K;
        A[i].resize(K);
        for (int j = 0; j < K; j++) {
            cin >> A[i][j];
        }
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    return 0;
}