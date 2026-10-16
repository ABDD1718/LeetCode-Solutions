class Solution {
public:
    string normalisestring(string &word){
        char start='a';
        unordered_map<char,char>mapping;
        for(int i=0;i<word.length();i++){
            if(mapping.find(word[i])==mapping.end()){
                mapping[word[i]]=start;
                start++;
            }
        }
        for(int i=0;i<word.length();i++){
            word[i]=mapping[word[i]];
        }
        return word;

    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string> ans;
       string patt=normalisestring(pattern);
       for(int i=0;i<words.size();i++){
        string current=words[i];
        if(normalisestring(words[i])==patt) ans.push_back(current);
       } 
       return ans;
    }
};