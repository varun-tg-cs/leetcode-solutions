class Solution {
public:
    string reverseString(string s){
        string rev = "";
        for(int i=s.size()-1;i>=0;i--){
            rev+=s[i];
        }
        return rev;
    }
    string reverseWords(string s) {
        string reverse = "";
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1){
                reverse+=s[i];
                ans+=reverseString(reverse);
            }
            if(s[i]==' '){
                ans=ans+(reverseString(reverse)+" ");
                reverse="";
                continue;
            }
            else{
                reverse+=s[i];
            }
        }
        return ans;
    }
};