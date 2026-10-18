class Solution {
public:
    bool isAnagram(string s, string t) {
          int count1[26] = {0}; 
        for(int i = 0;i<s.length();i++){
            count1[s[i] - 'a']++;
        }
        for(int i = 0;i<t.length();i++){
            count1[t[i] - 'a']--;
        }
        for(int i = 0;i<26;i++){
            if(count1[i] != 0){
                return false;
            }
        }
        return true;
    }
};