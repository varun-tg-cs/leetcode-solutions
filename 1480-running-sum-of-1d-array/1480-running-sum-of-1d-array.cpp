class Solution {
public:
    int Sum(vector<int>& temp){
        int sum=0;
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        return sum;
    }
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
            int sum = Sum(temp);
            ans.push_back(sum);
        }
        return ans;
    }
};