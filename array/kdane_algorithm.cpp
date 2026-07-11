#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        long long sum = 0, maxi = LONG_MIN;
        
int n = nums.size();
        for(int i = 0; i<n ; i++ ){
            sum += nums[i];
            if(sum>maxi){
                maxi = sum;
            }
            if (sum<0){
                sum=0;
            }
        }
            return maxi;
    }
    int main(){
        vector<int> nums;
int n;
cin >> n;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    nums.push_back(x);
    cout << maxSubArray(nums) << endl;
}
    }