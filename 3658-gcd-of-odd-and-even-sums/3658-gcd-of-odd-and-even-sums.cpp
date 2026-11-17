class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int oddSum=0,evenSum=0;
        for(int i=1;i<=2*n-1;i+=2){
            oddSum+=i;
        }
        for(int i=2;i<=2*n;i+=2){
            evenSum+=i;
        }
        return gcd(oddSum,evenSum);
    }
};