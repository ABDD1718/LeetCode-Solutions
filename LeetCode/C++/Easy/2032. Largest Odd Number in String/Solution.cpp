class Solution {
public:
    string largestOddNumber(string num) {
        if(num[num.size()-1]%2!=0) return num;
        int index=-1;
        string str;
        for(int i=0;i<num.size();i++){
            if(num[i]%2!=0) index=i;
        }
        if(index==-1) return "";
        else {
            for(int i=0;i<=index;i++){
                str.push_back(num[i]);
            }
            return str;
        }
    }
};