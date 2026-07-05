#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums, int n) {
    int sum = n * (n + 1) / 2;
    int actual = 0;
    for(int i = 0; i < n; i++) {
        actual += nums[i];
    }
    return sum - actual;
}

int main() {
    vector<int> nums = {1, 2, 4, 5, 6};
    int n = nums.size();
    cout << "Missing number: " << missingNumber(nums, n) << endl;
    return 0;
}