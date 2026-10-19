class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> maxPair = {-1, -1};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && nums[i] + nums[j] == target &&
                    nums[i] > nums[j]) {
                    ans.push_back({i, j});
                }
            }
        }
        if (ans.empty())
            return maxPair;
        int maxProd = nums[ans[0][0]] * nums[ans[0][1]];
        maxPair = ans[0];
        for (int i = 1; i < ans.size(); i++) {
            int product = nums[ans[i][0]] * nums[ans[i][1]];
            if (product > maxProd) {
                maxProd = product;
                maxPair = ans[i];
            }
        }
        return maxPair;
    }   
}
;