// #include <bits/stdc++.h>
// using namespace std;

// void PrintDivisors(int n) {
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cout << i << " ";
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     PrintDivisors(n);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void PrintDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int x : divisors) {
        cout << x << " ";
    }
}

int main() {
    int n;
    cin >> n;

    PrintDivisors(n);

    return 0;
}