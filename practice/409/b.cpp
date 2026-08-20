#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> ans;
    for (int i = 0; i <= n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] >= i) cnt++;
        }
        if (cnt >= i) ans.push_back(i);
    }
    cout << *max_element(ans.begin(), ans.end()) << endl;
}
