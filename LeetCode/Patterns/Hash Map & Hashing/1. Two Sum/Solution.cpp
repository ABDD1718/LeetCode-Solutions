class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            if(nums[start]+nums[end]==target){
                return {start,end};
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else start++;
        }
        return {-1,-1};
    }
};