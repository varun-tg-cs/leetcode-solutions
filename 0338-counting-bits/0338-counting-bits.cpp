class Solution {
public:
    long long decimalToBinary(int n){
        long long num=0;
        while(n!=0){
            int d = n%2;
            num = num*10+d;
            n/=2;
        }
        long long temp=0;
        while(num!=0){
            int ld = num%10;
            temp=temp*10+ld;
            num/=10;
        }
        return temp;
    }
    int countOnes(long long n){
        int c=0;
        while(n!=0){
            int ld=n%10;
            if(ld==1) c++;
            n/=10;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            long long bin = decimalToBinary(i);
            int c = countOnes(bin);
            ans.push_back(c);
        }
        return ans;
    }
};