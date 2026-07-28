#include <bits/stdc++.h>
using namespace std;

int main() {
    string S; cin >> S;
    set<char> s;
    for (int i = 0; i < 10; i++) {
        s.insert(i + '0');
    }

    string result = "";
    for (int i = 0; i < S.size(); i++) {
        if (s.count(S.at(i))) {
            result += S.at(i);
        }
    }
    cout << result << endl;
}
