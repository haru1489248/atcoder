#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    int index;
    int b;
    for (int i = 0; i < N; i++) {
        cin >> b;
        if (b == 1) {
            index = i;
        }
        a.at(i) = b;
    }

    cout << index << endl;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (index == 2) {
            break;
        }
        index = a.at(index);
        count++;
    }

    if (index != 2) {
        count = -1;
    }
    cout << count << endl;
}
