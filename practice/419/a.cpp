#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> m = {{"red", "SSS"}, {"blue", "FFF"}, {"green", "MMM"}};
    string s; cin >> s;
    if (m.count(s)) {
        cout << m[s] << endl;
    } else {
        cout << "Unknown" << endl;
    }
}
