class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        for(long long i=0;i<num;i++){
            if(i*i==num) return true;
            else if(i*i>num) return false;
        }
        return false;
    }
};