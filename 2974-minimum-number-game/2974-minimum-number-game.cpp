class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        deque<int> b,f;
        vector <int> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++) {
            if(i%2==0){
                b.push_back(nums[i]);
            }else{
                f.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            ans.push_back(f.front());
            ans.push_back(b.front());
            b.pop_front();
            f.pop_front();
        }
        return ans;
    }
};