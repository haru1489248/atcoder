#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string s;
    vector<int> results;
    int first;
    int second;
    int third;
    int forth;
    for (int i = 0; i <= N; i++) {
        if (i < 10) {
            if (A <= i && i <= B) {
                results.push_back(i);
            }
        } else if (i < 100) {
            second = i / 10;
            first = i % 10;
            if (A <= second + first && second + first <= B) {
                results.push_back(i);
            }
        } else if (i < 1000) {
            third = i / 100;
            second = (i % 100) / 10;
            first = (i % 100) % 10;
            if (A <= third + second + first && third + second + first <= B) {
                results.push_back(i);
            }
        } else if (i < 10000) {
            forth = i / 1000;
            third = (i % 1000) / 100;
            second = ((i % 1000) % 100) / 10;
            first = ((i%1000) % 100) % 10;
            if (A <= forth + third + second + first && forth + third + second + first <= B) {
                results.push_back(i);
            }
        } else {
            if (A <= 1 && 1 <= B) {
                results.push_back(10000);
            }
        }
    }

    int result = 0;
    for (int i = 0; i < results.size(); i++) {
        result += results.at(i);
    }

    cout << result << endl;
}
