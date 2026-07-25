#include<bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int>& arr, int k){
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int xorr = 0, count = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        xorr ^= arr[i];
        int x = xorr ^ k;
        count += mpp[x];
        mpp[xorr]++;
    }
    return count;
}

int main(){
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    cout << "Count: " << subarraysWithXorK(arr, k) << endl;
    return 0;
}