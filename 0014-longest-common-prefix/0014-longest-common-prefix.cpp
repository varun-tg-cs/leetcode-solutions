class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string common = "";
        int i=0;
        while(i<strs[0].size()){
            if(strs[0][i]==strs[n-1][i]){
                common+=strs[0][i];
            }
            else if(strs[0][i]!=strs[n-1][i]){
                break;
            }
            i+=1;
        }
        return common;
    }
};