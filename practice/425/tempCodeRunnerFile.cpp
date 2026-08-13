#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    set<int> s;
    int cnt = 0;
    rep(i,n) {
        if (a[i] > n) {
            cout << "No" << endl;
            return 0;
        }
        if (a[i] == -1) cnt++;
        else s.insert(a[i]);
    }
    if (s.size() + cnt != a.size()) {
        cout << "No" << endl;
        return 0;
    } else {
        cout << "Yes" << endl;
    }
    vector<int> p = a;
    int num = 1;
    rep(i,n) {
        while (true) {
            if (s.count(num)) num++;
            else break;
        }
        if (p[i] == -1) p[i] = num;
        s.insert(num);
    }
    rep(i,n) {
        cout << p[i];
        if (i == n-1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
