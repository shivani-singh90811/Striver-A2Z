#include <bits/stdc++.h>
using namespace std;

// return 1 if ==n
// return 0 if <n
// ṛeturn 2 if >n
int func(int mid, int n){
    long long ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= mid;
        if(ans > n)return 2;

    }
    if(ans == n)return 1;
    else return 0;
}


int nthRoot(int n, int m){
    int low = 1,high = n;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int midN = func(mid,m);

        if(midN == n){
            return mid;
        }
        else if(midN < n)low = mid + 1;
        else high = mid - 1;
        
    }

    return -1;
}      

int main(){
    int n = 28;
    int m = 3;
    cout << nthRoot(n,m);
    return 0;
}