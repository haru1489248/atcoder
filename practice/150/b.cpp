#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'A') {
            if (S[i+1] == 'B') {
                if (S[i+2] == 'C') {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
