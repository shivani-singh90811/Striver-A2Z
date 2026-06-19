// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     int gcd = 1;

//     for (int i = 1; i <= min(a, b); i++) {
//         if (a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }

//     cout << gcd;

//     return 0;
// }

// Euclidean algorithm

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a;

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     cout << __gcd(a, b);

//     return 0;
// }