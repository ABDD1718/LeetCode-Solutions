class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        long maxArea=0;
        while(left<right){
            long currArea=0;
            int len= min(height[left],height[right]);
            currArea= len*(right-left);
            if(currArea>maxArea) maxArea=currArea;
            if(len==height[left]) left++;
            else right--;
        }
        return maxArea;
    }
};