class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int, int> mpp;
        int c = 0;
        int i1 = -1, i2 = -1, i3 = -1;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto i : mpp) {
            int num = i.first;
            for (int i = 0; i < nums.size(); i++) {
                if (mpp[nums[i]] == 3 && nums[i] == num) {
                    if (i1 == -1) {
                        i1 = i;
                        continue;
                    }
                    if (i1 != -1 && i2 == -1) {
                        i2 = i;
                        continue;
                    }
                    if (i1 != -1 && i2 != -1) {
                        i3 = i;
                        break;
                    }
                }
            }
            if (i1 != -1 && i2 != -1 && i3 != -1 && i2 - i1 == i3 - i2) {
                c++;
            }
            i1 = -1, i2 = -1, i3 = -1;
        }
        return c;
    }
};