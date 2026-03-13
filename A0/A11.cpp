#include <bits/stdc++.h>
using namespace std;
search(vector<int> A, int N, int X){
    int l = 0;
    int r = N - 1;

    while(l <= r){
        int k = (l + r) / 2;

        if(A[k] == X){
            cout << "A[" << k << "] の値が " << X << " になっています。" << endl;
            return;
        }
        else if(A[k] < X){
            l = k + 1;
        }
        else{
            r = k - 1;
        }
    }
}

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    search(A, N, X);
}