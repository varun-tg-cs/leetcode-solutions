class Solution {
public:
    int hasTwo(int num,int digit){
        int c=0;
        while(num!=0){
            int ld=num%10;
            if(ld==digit) c++;
            num/=10;
        }
        return c;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int nums_i_Count = hasTwo(nums[i],digit);
            c+=nums_i_Count;
        }
        return c;
    }
};