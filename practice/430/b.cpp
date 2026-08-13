#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector grid(n, vector<char> (n));
    rep(i,0,n)rep(j,0,n) {
        cin >> grid[i][j];
    }
    int num = n-m+1;
    set<vector<char>> ans;
    rep(i,0,num)rep(j,0,num) {
        vector<char> s;
        rep(k,i,i+m)rep(l,j,j+m) {
            s.push_back(grid[k][l]);
        }
        ans.insert(s);
    }
    cout << ans.size() << endl;
}
