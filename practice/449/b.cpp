#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, Q; cin >> H >> W >> Q;
    vector chocolate(H, vector<int> (W, 1));
    for (int i = 0; i < Q; i++) {
        int type, C;
        cin >> type >> C;
        int cnt = 0;
        if (type == 1) {
            cnt += chocolate.at(0).size() * C;
            chocolate.erase(chocolate.begin() + chocolate.size() - C, chocolate.end());
        } else if (type == 2) {
            cnt += chocolate.size() * C;
            for (int j = 0; j < chocolate.size(); j++) {
                chocolate.at(j).erase(chocolate.at(j).begin() + chocolate.at(j).size() - C, chocolate.at(j).end());
            }
        }
        cout << cnt << endl;
    }
}
