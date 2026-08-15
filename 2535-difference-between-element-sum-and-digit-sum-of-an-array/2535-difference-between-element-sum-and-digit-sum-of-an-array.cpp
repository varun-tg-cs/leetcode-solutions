class Solution {
public:
    int digitSum(int n){
        int d_sum=0;
        while(n>0){
            int ld=n%10;
            n/=10;
            d_sum+=ld;
        }
        return d_sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int t_sum=0,d_sum=0;
        for(int i=0;i<nums.size();i++){
            t_sum+=nums[i];
            d_sum+=digitSum(nums[i]);
        }
        return t_sum-d_sum;
    }
};