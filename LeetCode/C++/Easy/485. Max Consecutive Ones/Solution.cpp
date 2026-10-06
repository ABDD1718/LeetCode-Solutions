class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        int j=0;
        while(j<nums.size()){
            if(( nums[j]==1)){
                count++;
                if(max<count){
                    max=count;
                }
                j++;
            }
            else  {
                count=0;
                j++;
            }
        }
        return max;
    }
};