class Solution {
public:
    bool notPresent(int ele,vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele) return false;
        }
        return true;
    }
    bool notThere(int ele,vector<vector<int>> &ans,int i){
        for(int j=0;j<ans[i].size();j++){
            if(ans[i][j]==ele) return false;
        }
        return true;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        for(int i=0;i<nums1.size();i++){
            if(notPresent(nums1[i],nums2) && notThere(nums1[i],ans,0)){
                ans[0].push_back(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(notPresent(nums2[i],nums1) && notThere(nums2[i],ans,1)){
                ans[1].push_back(nums2[i]);
            }
        }
        return ans;
    }
};