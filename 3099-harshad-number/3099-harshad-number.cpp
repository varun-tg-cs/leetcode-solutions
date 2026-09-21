class Solution {
public:
    int sumOfDigits(int n){
        int sum=0;
        while(n>0){
            int ld = n%10;
            sum+=ld;
            n/=10;
        }
        return sum;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int S = sumOfDigits(x);
        if(x%S==0){
            return S;
        }
        return -1;
    }
};