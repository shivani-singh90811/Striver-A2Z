class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;  // count "drops"
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        
        return count <= 1;
    }
};

// int issorted(int n,  vector<int> a){
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= a[i-1])
//         {
            
//         }
//         else {
//             return false;
//         }
//     }
//     return true;
// }