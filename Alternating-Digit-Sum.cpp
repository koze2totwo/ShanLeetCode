class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sum =0,t=-1;
        while(n){
            int d=n%10;
            sum= sum*t+d;
            n=n/10;
        }
        return sum;
    }
};