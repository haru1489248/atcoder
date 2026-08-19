#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;
    deque<int> a;
    bool re = true;
    rep(i,n) {
        if (re) {
            a.push_front(i+1);
        } else {
            a.push_back(i+1);
        }
        if (s[i] == 'o') re ^= 1;
    }

    if (re) reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
        if (i == n-1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
