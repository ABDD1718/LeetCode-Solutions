class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int j=0;
        while(nums[j]!=nums[nums[j]]){
            swap(nums[j],nums[nums[j]]);
            
        }
        return nums[j];
    }
};