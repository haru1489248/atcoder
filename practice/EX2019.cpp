#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b)  for(int i = (a); i < b; i++)
int main() {
    int N;
    string S;
    string t;
    set<string> s;
    cin >> N >> S;
    rep(i, 0, 10) {
        rep(j, 0, 10) {
            rep(k, 0, 10) {
                int t_index = 0;
                t = to_string(i) + to_string(j) + to_string(k);
                for (int id = 0; id < S.size(); id++) {
                    if (t[t_index] == S[id]) {
                        if (t_index + 1 == t.size()) {
                            s.insert(t);
                            break;
                        }
                        t_index++;
                    }
                }
            }
        }
    }

    cout << s.size() << endl;
}
