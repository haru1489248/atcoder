#include <bits/stdc++.h>
using namespace std;

int main() {
    int X; cin >> X;
    string s = "HelloWorld";

    s.erase(s.begin() + X - 1);
    cout << s << endl;
}
