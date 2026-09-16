class Solution {
public:
    int smallestEvenMultiple(int n) {
        int c=n;
        while(c!=(n*2)){
            if(c%2==0 && c%n==0){
                return c;
            }
            c++;
        }
        return c;
    }
};