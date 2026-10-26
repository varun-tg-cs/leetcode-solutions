class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0,c2=0;
        for(int i=0;i<s.size()/2;i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                c1++;
            }
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                c2++;
            }
        }
        return c1==c2;
    }
};