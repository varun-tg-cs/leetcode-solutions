class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        int total = mpp.size();
        if (total < 3) {
            return mpp.rbegin()->first;
        }
        int req = total - 3;
        int c = 0;
        for (auto i : mpp) {
            if (c == req) {
                return i.first;
            }
            c++;
        }
        return -1;
    }
};