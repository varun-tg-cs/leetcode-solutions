class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[0]>0||n==3){
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        int val1=nums[n-1]*nums[n-2]*nums[n-3];
        int val2=nums[0]*nums[n-2]*nums[n-3];
        int val3=nums[0]*nums[1]*nums[n-1];
        int M= max(val1,val2);
        return max(M,val3);
    }
};