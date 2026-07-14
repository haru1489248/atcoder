#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);

    for (int i = 0; i < N; i++) {
        cin >> d.at(i);
    }

    sort(d.rbegin(), d.rend());
    int count = 0;
    int index = 0;
    int prev = 101;
    while(index < N) {
        if (d.at(index) < prev) {
            count++;
            prev = d.at(index);
            index++;
        } else {
            index++;
        }
    }
    cout << count << endl;
}
