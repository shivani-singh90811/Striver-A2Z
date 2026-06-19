#include<bits/stdc++.h>
using namespace std;

// int reverse_number(int n){
//    int revN =0;
//    while (n>0)
//    {
//     int last_digit = n%10;
//     revN = revN *   10 +last_digit;
//     int n = n/10;
//    }
//    cout << revN;
// }
int main(){
int n;
cin >> n;
   int revN =0;
   while (n>0)
   {
    int ld = n % 10;
    revN = revN *   10 + ld;
    n = n/10;
   }
   cout << revN;
}