class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0; 
        int t=x;
         if(x<0){
                return false;
            }
        while (t != 0) {
            int last = t % 10; 
            rev = rev * 10 + last; 
            t = t / 10; }
           
            if(x==rev){
                return true;
            }
            else{
                return false;
            }
    }
};