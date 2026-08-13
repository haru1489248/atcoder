#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> abc(3);
    cin >> abc[0] >> abc[1] >> abc[2];
    sort(abc.rbegin(), abc.rend());
    for (int i = 0; i < 3; i++) {
        cout << abc[i];
    }
    cout << endl;
}
