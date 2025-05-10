class Solution {
public:
    int commonFactors(int a, int b) {
        int smol = min(a,b),r=0;
        for(int i=1;i<=smol;i++){
            if(a%i==0 && b%i==0){
                r++;
            }
        }
        return r;
    }
};