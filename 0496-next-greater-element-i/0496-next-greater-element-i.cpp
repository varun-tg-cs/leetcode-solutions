class Solution {
public:
    int nextGreater(vector<int>nums,int k){
        for(int i=k;i<nums.size();i++){
            if(nums[i]>nums[k]){
                return nums[i];
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int val = nextGreater(nums2,j);
                    ans.push_back(val);
                }
            }
        }
        return ans;
    }
};