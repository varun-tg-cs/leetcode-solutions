class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int>mpp1;
        map<char,int>mpp2;
        for(int i=0;i<word1.size();i++){
            mpp1[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            mpp2[word2[i]]++;
        }
        for(auto i:mpp1){
            if(abs(mpp1[i.first]-mpp2[i.first])>=4){
                return false;
            }
        }
        for(auto i:mpp2){
            if(abs(mpp1[i.first]-mpp2[i.first])>=4){
                return false;
            }
        }
        return true;
    }
};