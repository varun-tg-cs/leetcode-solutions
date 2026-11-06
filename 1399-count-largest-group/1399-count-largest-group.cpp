class Solution {
public:
    int sumOfDigits(int n){
        int sum =0;
        while(n!=0){
            int ld=n%10;
            sum+=ld;
            n/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        map<int,vector<int>>mpp;
        int val;
        for(int i=1;i<=n;i++){
            if(i<=9){
                val = i;
            }
            else{
                val = sumOfDigits(i);
            }
            mpp[val].push_back(i);
        }
        int maxSize = 0;
        for(auto i:mpp){
            if(mpp[i.first].size()>maxSize) maxSize = mpp[i.first].size();
        }
        int c=0;
        for(auto i:mpp){
            if(mpp[i.first].size()==maxSize) c++;
        }
        return c;
    }
};