#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S.at(i);
    string result = "";
    rep(i, N) {
        char C;
        if (S.at(i).at(0) <= 'c') C = '2';
        else if (S.at(i).at(0) <= 'f') C = '3';
        else if (S.at(i).at(0) <= 'i') C = '4';
        else if (S.at(i).at(0) <= 'l') C = '5';
        else if (S.at(i).at(0) <= 'o') C = '6';
        else if (S.at(i).at(0) <= 's') C = '7';
        else if (S.at(i).at(0) <= 'v') C = '8';
        else if (S.at(i).at(0) <= 'z') C = '9';
        result += C;
    }
    cout << result << endl;
}
