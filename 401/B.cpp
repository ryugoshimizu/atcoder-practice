#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, log = 0, error = 0;
    cin >> N;

    string S;
    for(int i = 0; i < N; i++){
        cin >> S;

        if(S == "login"){
            log = 1;
        }
        else if(S == "logout"){
            log = 0;
        }
        else if(S == "private" && log == 0){
            error++;
        }
    }

    cout << error << endl;
    return 0;
}