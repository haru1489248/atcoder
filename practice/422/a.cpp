#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int i, j;
    if (s[2] == '8') {
        i = s[0] - '1' + 2;
        j = 1;
    } else {
        i = s[0] - '1' + 1;
        j = (int)s[2] - '1' + 2;
    }
    cout << i << '-' << j << endl;
}
