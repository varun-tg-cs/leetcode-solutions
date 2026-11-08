class Solution {
public:
    int res;
    int newNumber(vector<int>& nums, int original){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==original){
                original=original*2;
                original =  newNumber(nums,original);
            }
        }
        return original;
    }
    int findFinalValue(vector<int>& nums, int original) {
        // int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==original){
                original=original*2;
                original = newNumber(nums,original);
            }
        }
        return original;
    }
};