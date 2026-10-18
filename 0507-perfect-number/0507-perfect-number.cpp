class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector <int> sum;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                sum.push_back(i);
            }
        }
        int SUM = accumulate(sum.begin(),sum.end(),0);
        return SUM == num;
    }
};