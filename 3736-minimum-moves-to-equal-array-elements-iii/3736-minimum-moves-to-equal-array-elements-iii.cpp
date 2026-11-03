class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            while(nums[i]!=largest){
                nums[i]++;
                c++;
            }
        }
        return c;
    }
};