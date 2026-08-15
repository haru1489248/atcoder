#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    vector<string> grid(h);
    rep(i,h){
        string s; cin >> s;
        grid[i] = s;
    }
    rep(i,h)rep(j,w) {
        int cnt = 0;
        bool ok = true;
        if (grid[i][j] == '#') {
            ok = false;
            if (i-1 >= 0 && grid[i-1][j] == '#') cnt++;
            if (i+1 < grid.size() && grid[i+1][j] == '#') cnt++;
            if (j-1 >= 0 && grid[i][j-1] == '#') cnt++;
            if (j+1 < grid[i].size() && grid[i][j+1] == '#') cnt++;
            if (cnt != 0 && cnt % 2 == 0) ok = true;
        }
        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
