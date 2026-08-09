#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        if ((i+1)%3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << i+1 << endl;
        }
    }
}
