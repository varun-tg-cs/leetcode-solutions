class Solution {
public:
    bool checkString(string s) {
        bool flaga=false;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='a'){
                flaga=true;
            }
            if(flaga && s[i]=='b'){
                return false;
            }
        }
        return true;
    }
};