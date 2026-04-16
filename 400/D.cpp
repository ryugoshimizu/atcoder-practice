#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    A--; B--; C--; D--;

    const int INF = 1e9;
    vector<vector<int>> dist(H, vector<int>(W, INF));

    deque<pair<int,int>> deq;

    dist[A][B] = 0;
    deq.push_front({A, B});

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while (!deq.empty()) {
        auto [x, y] = deq.front();
        deq.pop_front();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (S[nx][ny] == '#') continue;

            if (dist[nx][ny] > dist[x][y]) {
                dist[nx][ny] = dist[x][y];
                deq.push_front({nx, ny});
            }
        }

        for (int i = 0; i < 4; i++) {
            for (int k = 1; k <= 2; k++) {
                int nx = x + dx[i] * k;
                int ny = y + dy[i] * k;

                if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;

                if (dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    deq.push_back({nx, ny});
                }
            }
        }
    }
    cout << dist[C][D] << "\n";
    return 0;
}