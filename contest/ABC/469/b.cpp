#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if ((i-1 < 0 || s.at(i-1) == 'x') && s.at(i) == 'x' && (i+1 > n-1 || s.at(i+1) == 'x')) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
