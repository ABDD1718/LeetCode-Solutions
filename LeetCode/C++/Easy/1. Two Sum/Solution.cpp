class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int i=0;
        for(i=0;i<nums.size()-1;i++){
            for(int j=1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};