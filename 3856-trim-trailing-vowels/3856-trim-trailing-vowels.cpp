class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        string ans="";
        int flag=1;
        for(int i=s.size()-1;i>=0;i--){
            if(isVowel(s[i]) && flag){
                continue;
            }
            if(isVowel(s[i])==false && flag==1){
                flag=0;
            }
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};