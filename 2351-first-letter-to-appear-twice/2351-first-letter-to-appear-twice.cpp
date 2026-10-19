class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char,int> mpp;
        char c;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            c = s[i];
            if(mpp[c]==2) break;
            
        }
        return c;
    }
    
};