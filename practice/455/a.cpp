#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;

    string result = A != B && B == C ? "Yes" : "No";
    cout << result << endl;
}
