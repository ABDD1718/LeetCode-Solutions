class Solution {
public:
    string reorganizeString(string s) {
        int map[256]={0};
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        int maxfreq=INT_MIN;
        char maxchar;
        for(int i='a';i<='z';i++){
            if(map[i]>maxfreq){
                maxfreq=map[i];
                maxchar=i;
            }

        }
        if(maxfreq>(s.size()+1)/2) return "";
        int index=0;
        while(maxfreq>0 && index<s.size()){
            s[index]=maxchar;
            maxfreq--;
            index+=2;
        }
        map[maxchar]=0;
        for(int i='a';i<='z';i++){
            while(map[i]>0){
                index=index>=s.size()?1:index;
                s[index]=i;
                map[i]--;
                index+=2;
            }
        }
        return s;
    }
};