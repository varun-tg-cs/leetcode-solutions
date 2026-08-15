class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        while(j<n){
            swap(nums[i],nums[j]);
            i+=2;
            j+=2;
        }
        return nums;
    }
};