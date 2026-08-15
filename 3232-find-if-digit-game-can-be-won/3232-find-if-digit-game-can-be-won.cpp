class Solution {
public:
    bool isSingleDigit(int n) {
        if (n % 10 == n) {
            return true;
        }
        return false;
    }
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0, doubleDigitSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(isSingleDigit(nums[i])){
                singleDigitSum+=nums[i];
            }
            else{
                doubleDigitSum+=nums[i];
            }
        }
        if(singleDigitSum==doubleDigitSum){
            return false;
        }
        return true;
    }
};