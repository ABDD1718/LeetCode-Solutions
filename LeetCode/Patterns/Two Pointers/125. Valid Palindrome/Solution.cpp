class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int h=s.size()-1;
        for (char &c : s) {
        c = tolower(static_cast<unsigned char>(c));}
        while(l<h){
            if(isalnum(s[l])&&isalnum(s[h])){
                if(s[l]==s[h]) {l++,h--;
                }
                else return false;
            }
            else{
                if(isalnum(s[l])) h--;
                else if(isalnum(s[h])) l++;
                else{l++,h--;}
            }
        }
        return true;
    }
};