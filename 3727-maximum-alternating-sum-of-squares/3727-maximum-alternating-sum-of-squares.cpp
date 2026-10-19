class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]=nums[i]*-1;
        }
        sort(nums.begin(),nums.end());
        long long negativeSum=0,positiveSum=0;
        for(int i=0;i<n/2;i++){
            negativeSum+=(nums[i]*nums[i]);
        }
        for(int i=n/2;i<n;i++){
            positiveSum+=(nums[i]*nums[i]);
        }
        return positiveSum-negativeSum;
    }
};