#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> vec;

    for (int i = 0; i < N; i++) {
        int a, b;
        pair<int, int> p;
        cin >> a >> b;
        p = make_pair(b, a);
        vec.push_back(p);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < N; i++) {
        cout << vec.at(i).second << " " << vec.at(i).first << endl;
    }
}
