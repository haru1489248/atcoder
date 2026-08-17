#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    string s; cin >> s;
    vector<string> T;
    rep(i,s.size()) {
        rep(j,s.size()) {
            if (i+j>=s.size()) break;
            if (s[i] == 't' && s[i+j] == 't' && j+1 >= 3) T.push_back(s.substr(i,j+1));
        }
    }
    double maximum = 0;
    rep(i,T.size()) {
        double x = 0;
        rep(j,T[i].size()) {
            if (T[i][j] == 't') x++;
        }
        double p = (x - 2) / (T[i].size() - 2);
        maximum = max(maximum, p);
    }
    printf("%.17f", maximum);
}
