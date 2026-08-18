#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    vector<int> index;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') index.push_back(i+1);
    }
    for (int i = 0; i < index.size(); i+=2) {
        cout << index[i] << "," << index[i+1] << endl;
    }
}
