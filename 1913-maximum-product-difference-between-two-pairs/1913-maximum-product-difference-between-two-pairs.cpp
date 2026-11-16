class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX;
        int c=INT_MIN,d=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>d){
                c=d;
                d=nums[i];
            }
            else if(nums[i]>c){
                c=nums[i];
            }
            if(nums[i]<a){
                b=a;
                a=nums[i];
            }
            else if(nums[i]<b){
                b=nums[i];
            }
        }
        return ((c*d)-(a*b));
    }
};