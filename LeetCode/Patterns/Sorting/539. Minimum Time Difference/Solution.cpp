class Solution {
public:
    int converttomin(string &time){
        int hr= stoi(time.substr(0,2));
        int min=stoi(time.substr(3,2));
        int ans=60*hr+min;
        return ans;
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int>mins;
        for(auto time:timePoints){
            mins.push_back(converttomin(time));
        }
        sort(mins.begin(),mins.end());
        for(auto i:mins){
            cout<<i;
        }
        int minn=INT_MAX;
        for(int i=0;i<mins.size()-1;i++){
            int diff=mins[i+1]-mins[i];
            minn=min(minn,diff);
        }
        int lastdiff=mins[0]+1440-mins[mins.size()-1];
        minn=min(minn,lastdiff);
        return minn;
    }
};