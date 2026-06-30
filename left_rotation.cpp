#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray( vector <int> &arr, int){
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[n-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}
int 