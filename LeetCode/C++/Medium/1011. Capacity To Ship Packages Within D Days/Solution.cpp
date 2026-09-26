class Solution {
public:
    int findday(vector<int>& weights,int cap){
        int load=0,days=1;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>cap){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int sum(vector<int>& weights){
        int sum=0;
        for(int i=0;i<weights.size();i++) sum+=weights[i];
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=sum(weights);
        while(low<=high){
            int mid=low+(high-low)/2;
            int noOfDays=findday(weights,mid);
            if(noOfDays<=days) high=mid-1;
            else low=mid+1;
        }
        return low;

    }
};