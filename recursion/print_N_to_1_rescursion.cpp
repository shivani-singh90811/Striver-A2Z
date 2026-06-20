#include <bits/stdc++.h>
using namespace std;

void f(int n) {
    if (n == 0) return;

    cout << n << " ";
    f(n - 1);
}

int main() {
    int N;
    cin >> N;

    f(N);

    return 0;
}