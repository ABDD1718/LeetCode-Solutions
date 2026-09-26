class Solution {
public:
    int sum(vector<int>& nums,int high){
        int subArray=1,sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=high) sum+=nums[i];
            else{ subArray++;
            sum=nums[i];}
        }
        return subArray;
    }
    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int cntsum=sum(nums,mid);
            if(cntsum>k) low=mid+1;
            else high=mid-1;

        }
        return low;
    }
};