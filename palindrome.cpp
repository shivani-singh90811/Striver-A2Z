class Solution {
public:
bool isPalindrome(int x) {
    int revNum = 0;
    int dup = x;
     while(x>0){
        int ld = x%10;
        revNum = (revNum*10)+ld;
         x = x/10;
         }
         if(dup==revNum){
            cout<<"True";
            return true;
           } else {
            cout<<"False";
            return false;
            }
        }
};
