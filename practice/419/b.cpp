#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    vector<int> vec;
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            vec.push_back(x);
        } else {
            sort(vec.rbegin(), vec.rend());
            cout << vec[vec.size() - 1] << endl;
            vec.pop_back();
        }
    }
}
