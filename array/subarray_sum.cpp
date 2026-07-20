#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int k){
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int sum = 0, count = 0;
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
        int remove = sum - k;
        count += mpp[remove];
        mpp[sum]++;
    }
    return count;
}

int main(){
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    cout << "Count: " << subarraySum(arr, k) << endl;
    return 0;
}