#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    map<int, int> m;
    int n;
    cin >> n >> s;
    int life = 0;
    int cnt = 0;
    int index = 0;
    for (int k = n; k > 0; k--) {
        string S = s;
        cnt = k;
        index = k - 1;
        int save_id = k - 1;
        for (int j = 0; j < k; j++) {
            if (S.at(j) == 'o') life++;
        }
        while (life != 0) {
            if (index == S.size() - 1) break;
            if (m.count(index)) {
                cnt += m[index];
                break;
            }
            if (S.at(index) == 'o') life++;
            cnt++;
            life--;
            index++;
        }
        if (!m.count(save_id)) m[save_id] = cnt;
        cout << cnt << endl;
    }
}
