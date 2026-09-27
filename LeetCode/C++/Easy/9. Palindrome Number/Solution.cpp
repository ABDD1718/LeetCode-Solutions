class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0||((n%10==0)&&n!=0)) return false;
        int revhalf=0;
        while(n>revhalf){
            revhalf=revhalf*10+(n%10);
            n/=10;
        }
        return n==revhalf||n==revhalf/10;
    }
};