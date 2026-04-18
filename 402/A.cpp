#include <bits/stdc++.h>
using namespace std;
#include <cctype>

int main(){
    string S;
    cin >> S;
    for(char c : S){
        if(isupper(c)){
            cout << c;
        }
    }
    cout << "\n";
    return 0;
}