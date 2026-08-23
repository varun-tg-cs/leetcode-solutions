class Solution {
public:
    bool checkDivisibility(int n) {
        int temp =n,sum=0,prod=1;
        while(temp!=0){
            int ld=temp%10;
            sum+=ld;
            prod*=ld;
            temp/=10;
        }
        if(n%(sum+prod)==0){
            return true;
        }
        return false;
    }
};