class Solution {
public:
    int titleToNumber(string c) {
        int ans=0;
        int n=c.size()-1;
        for(int i =0;i<c.size();i++){
            ans=pow(26,n--)*(c[i]-64)+ans;
        }
        return ans;
    }
};