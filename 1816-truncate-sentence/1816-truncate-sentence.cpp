class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                c++;
            }
            if(c==k) break;
            ans = ans+s[i];
        }
        return ans;
    }
};