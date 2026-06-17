#include <bits/stdc++.h>
using namespace std;

void print1(int n) {

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}
void print2(int n) {
    for (int i = 0; i < n; i++) {
    for (int j = 0; j <=i; j++) {
        cout << "*";
    }
    cout << endl;
}
}
void print3(int n) {
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j<=i; j++) {
        cout << j<<" ";
    }
    cout << endl;
}
}
void print4(int n) {
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j<=i; j++) {
        cout << i <<" ";
    }
    cout << endl;
}
}
void print5(int n) {

    for (int i = 1; i <= n; i++) {
    for (int j = 1; j<=n-i+1; j++) {
        cout << "*" <<" ";
    }

    cout << endl;
}
}
void print6(int n) {
    
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j<=n-i+1; j++) {
        cout << j <<" ";
    }

    cout << endl;
}
}
void print7(int n) {
    
    for (int i = 0; i <n; i++) {

        // space 
    for (int j = 0; j<=n-i-1; j++) {
        cout <<" ";
    }
    // star
    for(int j = 0; j<2*i+1; j++) {
        cout << "*";
    }
    for(int j = 0; j<n-i-1; j++) {
        cout <<" ";
    }

    cout << endl;
}
}
void print8(int n) {
    
    for (int i = 0; i <n; i++) {

        // space 
    for (int j = 0; j<i; j++) {
        cout <<" ";
    }
    // star
    for(int j = 0; j<2*n-(2*i+1); j++) {
        cout << "*";
    }
    for(int j = 0; j<i; j++) {
        cout <<" ";
    }

    cout << endl;
}
}
void print9(int n) {
    
    for (int i = 1; i <=2*n-1; i++) {
        int stars = i;
        if(i > n)stars = 2*n-i;
         for (int j =1; j<=stars; j++) {
            cout << "*";
    }
    cout << endl;
}
}


void print11(int n) {
    int start = 1;
    for (int i = 1; i<=n;i++){
        if (i%2==0)start = 1;
        else start = 0;
        for (int j = 1; j<=i;j++) {
             cout << start <<" ";
             start = 1-start;
    }
     cout << endl;
}
}
void print12(int n){
    int space = 2*(n-1);
    for(int i=1 ; i<=n; i++){
        // numbers
        for (int j=1; j<=i; j++){
            cout << j;
        }

        // space
        for (int j=1; j<=space; j++){
            cout << " ";
        }

        // numbers
        for (int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void print13(int n){
  int num = 1;
    for (int i = 1; i<=n;i++){
        for (int j = 1; j<=i;j++) {
             cout << num <<" ";
             num++;
    }
     cout << endl;  
    }
}

void print14(int n){
    for (int i = 1; i<=n;i++){
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++) {
             cout << ch <<" ";
        }
        cout << endl;
    }
}


void print15(int n){
    for (int i = 1; i<=n;i++){
        for (char ch = 'A'; ch <= 'A' + (n-i - 1); ch++) {
             cout << ch <<" ";
        }
        cout << endl;
    }
}

void print16(int n){
    for (int i = 0; i<=n;i++){
        char ch = 'A'+i;
        for (int j = 0; j <= i;+  j++) {
             cout << ch <<" ";
        }
        cout << endl;
    }
}

void print17(int n){
    for(int i = 0; i < n; i++){
        // leading spaces
        for(int j = 0; j < n-i-1; j++)
            cout << " ";

        char ch = 'A';
        int breakpoint = i; // midpoint index — 0 to 2*i

        for(int j = 0; j <= 2*i; j++){
            cout << ch;
            if(j < breakpoint) ch++;   // ascending half
            else ch--;                 // descending half
        }

        // trailing spaces (optional, only matters if centering needed)
        for(int j = 0; j < n-i-1; j++)
            cout << " ";

        cout << "\n";
    }
}
void print18(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + (n - i - 1);  // row 0 = E, row 1 = D...
        
        for(int j = 0; j <= i; j++){
            cout << ch;
            if(j < i) cout << " ";   // space between chars, not after last
        }
        
        cout << "\n";
    }
}

void print19(int n){
    // upper half
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++) cout << "*";
        for(int j = 0; j < 2*(n-i); j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }
    // lower half
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) cout << "*";
        for(int j = 0; j < 2*(n-i); j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }
}
void print20(int n){
    // upper half
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) cout << "*";
        for(int j = 0; j < 2*(n-i); j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }
    // lower half
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++) cout << "*";
        for(int j = 0; j < 2*(n-i); j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "*";
        cout << "\n";
    }
}

void print21(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i==1 || i==n || j==1 || j==n)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

void print22(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int top    = i;
            int left   = j;
            int bottom = (n-1) - i;
            int right  = (n-1) - j;
            // distance from nearest border
            cout << (n - min({top, left, bottom, right}));
            if(j < n-1) cout << " ";
        }
        cout << "\n";
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        print18(n);
        
    }
}