class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if (i.second==2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};