#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> takahashi(n);
    rep(i,n) {
        long long h, l;
        cin >> h >> l;
        takahashi.emplace_back(h,l);
    }
    sort(takahashi.rbegin(), takahashi.rend());
    int q; cin >> q;
    int index = 0;
    rep(i,q) {
        index = 0;
        long long t;
        cin >> t;
        while (true) {
            if (t+0.5 > takahashi[index].second) {
                index++;
            } else {
                cout << takahashi[index].first << endl;
                break;
            }
        }
    }
}
