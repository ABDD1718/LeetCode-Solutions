class Solution {
public:
    int maxDepth(string s) {
        int opened=0;
        int maxx=0;
        for(char c:s){
            if(c=='(') opened++;
            else if(c==')') opened-- ;
            maxx=max(maxx,opened);
        }
        return maxx;
    }

};