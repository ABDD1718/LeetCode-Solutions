class Solution {
public:
    bool possible(vector<int>&nums,int day,int m ,int k){
        int cnt=0;
        int bloom=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=day) cnt++;
            else {
                bloom+= (cnt/k);
                cnt=0;
            }
        }
        bloom+= (cnt/k);
        return bloom>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int n=bloomDay.size();
        long long total= 1LL*m*k;
        if(n<total) return -1;
        while(low<=high){
            long mid=low+(high-low)/2;
            if (possible(bloomDay,mid,m,k)) high=mid-1;
            else low=mid+1;

        }
        return low;
    }
};