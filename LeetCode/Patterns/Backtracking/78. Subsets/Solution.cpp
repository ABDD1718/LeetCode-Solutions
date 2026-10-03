class Solution {
public:
    void findsubsets(int ind,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        if(ind==arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        findsubsets(ind+1,arr,ds,ans);
        ds.pop_back();
        findsubsets(ind+1,arr,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        findsubsets(0,nums,ds,ans);
        return ans;
    }
};