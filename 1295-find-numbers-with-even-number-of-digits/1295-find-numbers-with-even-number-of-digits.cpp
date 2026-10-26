class Solution {
public:
    bool evenNumberOfDigits(int num){
        string str = to_string(num);
        int c=0;
        for(int i=0;i<str.size();i++){
            c+=1;
        }
        if (c%2==0){
            return true;
        }
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(evenNumberOfDigits(nums[i])){
                c+=1;
            }
        }
        return c;
    }
};