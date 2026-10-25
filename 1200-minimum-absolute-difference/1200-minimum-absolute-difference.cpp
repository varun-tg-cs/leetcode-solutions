class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>>res;
        int min_diff=INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int d = nums[i+1]-nums[i];
            if(d<min_diff){
                min_diff=d;
            }
        }
        for(int i=0;i<n-1;i++){
            // int diff=INT_MAX;
            // for(int j=i+i;j<n;j++){
            //     int diff=nums[j]-nums[i];
            //     if(diff==min_diff){
            //         res.push_back({nums[i],nums[j]});
            //     }
            // }
            int d = nums[i+1]-nums[i];
            if(d==min_diff){
                res.push_back({nums[i],nums[i+1]});
            }
        }
        return res;
    }
};