#include <bits/stdc++.h>
using namespace std;

int main() {
    string S; cin >> S;

    int e_count = 0;
    int w_count = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S.at(i) == 'E') e_count++;
        else w_count++;
    }

    if (e_count > w_count) cout << "East" << endl;
    else cout << "West" << endl;
}
