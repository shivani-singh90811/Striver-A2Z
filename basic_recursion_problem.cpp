// print name 5 times
#include<bits/stdc++.h>
using namespace std;

int n = 0;
void printName(int n){
    if(n==5) return;
    cout<<"Shivani"<<endl;
    n++;
    printName(n);
}
int main(){

    printName(n);
    return 0;
}