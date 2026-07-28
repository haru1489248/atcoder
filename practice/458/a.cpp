#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int N;
    cin >> S >> N;
    S.erase(0, N);
    S.erase(S.size() - N);
    cout << S << endl;
}
