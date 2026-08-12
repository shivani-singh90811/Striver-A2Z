#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int>& nums) {
    int maxi = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        maxi = max(maxi, nums[i]);
    }    return maxi;
}

int sumByD(vector<int>& nums, int divisor) {
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += ceil((double)nums[i] / divisor);
    }
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {

    int low = 1;
    int high = findMax(nums);

    while (low <= high) {

        int mid = low + (high - low) / 2;
        int sum = sumByD(nums, mid);

        if (sum <= threshold) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
   return low;
}
int main() {
     vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << smallestDivisor(nums, threshold);

    return 0;
}