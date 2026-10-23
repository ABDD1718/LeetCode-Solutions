class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int i=0;
        int j=i+1;
        while(j<nums.size()&&i<nums.size()){
             if(j==nums.size()-1){
                if(nums[i]+nums[j]==target){
                v.push_back(i);
                v.push_back(j);
                break;
            }
                i++;
                j=i+1;
            }
            if(nums[i]+nums[j]==target){
                v.push_back(i);
                v.push_back(j);
                break;
            }
            else j++;
           
            
        }
        return v;
    }
};