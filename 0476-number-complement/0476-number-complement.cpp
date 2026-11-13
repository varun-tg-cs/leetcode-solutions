class Solution {
public:
    int findComplement(int num) {
        string rem="";
        int temp = num;
        while(num!=0){
            int ld = num%2;
            rem+=to_string(ld);
            num/=2;
        }
        for(int i=0;i<rem.size()/2;i++){
            char x = rem[i];
            rem[i]=rem[rem.size()-i-1];
            rem[rem.size()-i-1]=x;
        }
        for(int i=0;i<rem.size();i++){
            if(rem[i]=='1'){
                rem[i]='0';
            }
            else{
                rem[i]='1';
            }
        }
        int sum=0;
        int j=0;
        for(int i=rem.size()-1;i>=0;i--){
            int val = rem[i]-'0';
            sum=sum+(pow(2,j)*val);
            j++;
        }
        return sum;
    }
};