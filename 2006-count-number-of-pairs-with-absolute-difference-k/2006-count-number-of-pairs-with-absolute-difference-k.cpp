class Solution {
public:
    int absolute(int x){
        if(x>=0) return x;
        return -1*x;
    }
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int val = nums[i]-nums[j];
                if(absolute(val)==k){
                    c++;
                }
            }
        }
        return c;
    }
};