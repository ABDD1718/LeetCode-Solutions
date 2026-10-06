class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=nums[0];
        int count=1;
        int i=1;
        while(i<nums.size()){
        if(count==0){
            element=nums[i];
            count++;
        }
        else if(nums[i]==element){
            count++;
        }
        else{
            count--;
        }
        
        i++;}
    return element;
    }
};