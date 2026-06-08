class Solution {
public:
    int reverse(int x) {
        long long revNum = 0;
        
        while (x != 0) {
            int ld = x % 10;
            revNum = (revNum * 10) + ld;
            x = x / 10;
        }
        
        // Overflow check
        if (revNum > INT_MAX || revNum < INT_MIN) return 0;
        
        return (int)revNum;
    }
};