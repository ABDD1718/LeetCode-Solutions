class Solution {
public:
    int reverse(int x) {
        int rev = 0; 
        while (x != 0) {
            int last = x % 10; 
             if ((rev > INT_MAX ) || (rev < INT_MIN )) {
                return 0; 
            }
           
           
            
            rev = rev * 10 + last; 
            x = x / 10; 
        }
        return rev;
    }
};