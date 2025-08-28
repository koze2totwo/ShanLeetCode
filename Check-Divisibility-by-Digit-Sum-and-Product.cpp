class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n,sum=0,prod=1;
        while(num){
            int d=num%10;
            sum+=d;
            prod*=d;
            num/=10;
        }
        if(n%(sum+prod)==0){
            return true;
        }
        return 0;
    }
};