class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){

        bool flag=true,flag2=true;
            if(i-k>=0){
                if(nums[i]<=nums[i-k]){
                    flag = false;
                }
            }
            if(i+k<nums.size()){
                if(nums[i]<=nums[i+k]){
                    flag2 = false;
                }
            }
            if(flag && flag2){
                sum+=nums[i];
            }
        }
        return sum;
    }
};