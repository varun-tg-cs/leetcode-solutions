class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n;
        bool isValid = false;
        while(n!=0){
            int ld=n%10;
            n/=10;
            if(n==0 && ld==x) return false;
            if(n!=0 && ld==x){
                isValid = true;
            }
        }
        return isValid;
    }
};