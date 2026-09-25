class Solution {
public:
    bool selfDividingNumber(int num){
        int temp = num;
        while(num>0){
            int ld = num%10;
            if(ld==0){
                return false;
            }
            if(temp%ld!=0){
                return false;
            }
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> ans;
        for(int i=left;i<=right;i++){
            if(selfDividingNumber(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};