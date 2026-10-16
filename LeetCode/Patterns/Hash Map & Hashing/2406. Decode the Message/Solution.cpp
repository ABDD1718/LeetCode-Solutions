class Solution {
public:
    void createmapping(unordered_map<char,char>&mapping,string key){
        char start='a';
        for(int i=0;i<key.length();i++){
            if(mapping.find(key[i])==mapping.end()){
            mapping[key[i]]=start;
            start++;}
        }
    }
    string usemapping(unordered_map<char,char>mapping, string message){
        string ans="";
        for(int i=0;i<message.size();i++){
            ans.push_back(mapping[message[i]]);
        }
        return ans;
    }
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mapping;
        char space=' ';
        mapping[space]=space;
        createmapping(mapping,key);
        return usemapping(mapping,message);
        

        
    }
};