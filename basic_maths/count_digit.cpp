#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int count =0;
    while (n>0)         

    {
       // int last_digit = n%10; // extraction of digits does not need in count f digit
        count = count+1;
        n = n/10;
    }
    return count;
}
// int cnt(int n){
//     int cnt = log10(n)+1;
//     return cnt;

// }

int main(){
int n;
cin >> n;
cout << count(n);
}
