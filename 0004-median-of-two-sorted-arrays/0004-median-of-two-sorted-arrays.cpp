class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>nums;
        for(int i=0;i<n1;i++){
            nums.push_back(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
        double median;
        // [1,2,3,4]
        if(n%2==0){
            median = (nums[(n/2)-1]+nums[n/2])/2.0;
        }
        // [1,2,3]
        else{
            median = nums[(n-1)/2];
        }
        return median;
    }
};