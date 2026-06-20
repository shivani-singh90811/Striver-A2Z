#include <bits/stdc++.h>
using namespace std;

void f(int i, int N) {
    if (i < 1) return;

    f(i - 1, N);
    cout << i << " ";
}

int main() {
    int N;
    cin >> N;

    f(N, N);

    return 0;
}