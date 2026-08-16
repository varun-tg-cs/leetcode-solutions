class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = accumulate(nums.begin(), nums.end(), 0);
            if (sum % k == 0) {
                return c;
            }
            else{
                while(sum%k!=0){
                    nums[i]--;
                    c+=1;
                    sum = accumulate(nums.begin(), nums.end(), 0);
                }
            }
        }
        return c;
    }
};