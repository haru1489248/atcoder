#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<string>> a(H, vector<string> (W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> a.at(i).at(j);
        }
    }

    int count = 0;
    vector<int> row(H);
    for (int i = 0; i < H; i++) {
        count = 0;
        for (int j = 0; j < W; j++) {
            if (a.at(i).at(j) != ".") {
                j += W;
            }
            count++;
            if (count == W) {
                row.push_back(i);
            }
        }
    }

    vector<int> column(H);
    for (int i = 0; i < H; i++) {
        count = 0;
        for (int j = 0; j < W; j++) {
            if (a.at(j).at(i) != ".") {
                j += W;
            }
            count++;
            if (count == W) {
                column.push_back(i);
            }
        }
    }

    for (int i = 0; i < row.size(); i++) {
        a.erase(a.begin() + row.at(i));
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < column.size(); j++) {
            a.at(i).erase(a.at(i).begin() + column.at(j));
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << a.at(i).at(j);
            if (j = W - 1) {
                cout << endl;
            }
        }
    }
}
