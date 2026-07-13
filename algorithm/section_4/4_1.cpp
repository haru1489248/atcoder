#include <bits/stdc++.h>
using namespace std;

int tribo(int N) {
    if (N == 0) return 0;
    else if (N == 1) return 0;
    else if (N == 2) return 1;

    int result;
    result = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);

    return result;
}

int main() {
    int result;
    result = tribo(5);

    cout << result << endl;
}
