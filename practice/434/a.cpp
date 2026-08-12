#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, b; cin >> w >> b;
    int n = 0;
    while (!(1000*w < n*b)) {
        n++;
    }
    cout << n << endl;
}
