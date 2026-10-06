class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size());
        int count=0;
        int count1=1;
        int i=0;
      while(i<nums.size()){
            if(nums[i]>0){
               v[count]=nums[i];
               count+=2;
            }
            else{
                v[count1]=nums[i];
                count1+=2;
            }
            i++;

        }
        return v;
    }
};