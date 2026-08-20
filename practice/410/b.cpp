#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<int> box(n);
    vector<int> ans;
    rep(i,q) {
        int x; cin >> x;
        if (x >= 1) {
            box[x-1]++;
            ans.push_back(x);
        } else if (x == 0) {
            int num = min_element(box.begin(), box.end()) - box.begin();
            box[num]++;
            ans.push_back(num+1);
        }
    }
    rep(i,ans.size()) {
        cout << ans[i];
        if (i==ans.size()-1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
