#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector <int> &arr, int n){
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    vector<int> arr = {1,2,3,2,3,3}; 
    int n = 6;             
    int k = removeDuplicates(arr,n);             
    cout << k << endl;
    return 0;
}
