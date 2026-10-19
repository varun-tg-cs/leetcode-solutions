class Solution {
public:
    string clearDigits(string s) {
        string ans ="";
        int i=0;
        while(s[i]!='\0'){
            if(48<=s[i] && s[i]<=57){
                ans.pop_back();
                i++;
                continue;
            }
            ans.push_back(s[i]);
            i++;
        }
        return ans;
    }
};