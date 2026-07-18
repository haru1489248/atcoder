#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> m;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (m.count(a)) {
            m.at(a) += 1;
        } else {
            m[a] = 1;
        }
    }

    int maximum;
    int max_key;
    for (pair<int, int> p : m) {
        int key = p.first;
        int value = p.second;
        if (maximum < value) {
            max_key = key;
            maximum = value;
        }
    }

    cout << max_key << " " << maximum << endl;
}
