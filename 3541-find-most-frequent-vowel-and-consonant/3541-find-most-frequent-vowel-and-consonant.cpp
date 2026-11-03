class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int MaxV=0,MaxC=0;
        for(auto &i:mpp){
            if(i.first=='a'||i.first=='e'||i.first=='i'||i.first=='o'||i.first=='u'){
                if(i.second>MaxV){
                    MaxV = i.second;
                }
            }else{
                if(i.second>MaxC){
                    MaxC = i.second;
                }
            }
        }
        return MaxC+MaxV;
    }
};