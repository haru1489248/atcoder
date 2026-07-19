#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

int main() {
    int N;
    cin >> N;
    string a;
    vector<string> vec;
    cin.ignore();

    for (int i = 0; i < N; i++) {
        getline(cin, a);
        vec.push_back(a);
    }

    vector<string> b;
    for (int i = 0; i < N; i++) {
      char c;
      string s;
      int index = 0;
      while(c == ';') {
        c = vec.at(i).at(index);
        index++;
        if (c == ' ') {
          b.push_back(s);
        } else {
          s += c;
          cout << s << endl;
        }
      }
    }
    cout << b.at(0) << endl;
}
