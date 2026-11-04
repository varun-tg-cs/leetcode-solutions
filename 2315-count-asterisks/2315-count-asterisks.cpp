class Solution {
public:
    int countAsterisks(string s) {
        int countOfVertical=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|') countOfVertical++;
            if(countOfVertical%2==0 && s[i]=='*'){
                c++;
            }
        }
        return c;
    }
};