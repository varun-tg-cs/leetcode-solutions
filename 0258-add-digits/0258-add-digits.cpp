class Solution {
public:
    int sumOfDigits(int num){
        int sum=0;
        while(num!=0){
            int ld=num%10;
            sum+=ld;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        num = sumOfDigits(num);
        while(num/10!=0){
            num = sumOfDigits(num);
        }
        return num;
    }
};