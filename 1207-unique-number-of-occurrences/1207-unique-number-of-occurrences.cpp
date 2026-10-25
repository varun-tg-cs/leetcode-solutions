class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto i:mpp){
            int temp = i.second;
            for(auto i2:mpp){
                int next = i2.second;
                if(i.first != i2.first && temp==next) return false;
            }
        }
        return true;
    }
};