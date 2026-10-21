class Solution {
public:
    int checkpalindrome(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
            
        }
        return count;
    }
    int countSubstrings(string s) {
        int count =0;
        for(int center=0;center<s.size();center++ ){
            int i=center;
            int j=center;
            int oddlenpalindrome=checkpalindrome(s,i,j);
            i=center;
            j=center+1;
            int evenlenpalindrome=checkpalindrome(s,i,j);
            count= count+oddlenpalindrome+evenlenpalindrome;

        }
        return count;
    }
};