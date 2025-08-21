class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=0,j=0;
        //simple sliding winodw o(n)
        for(int i=0;i<s.size();i++){
            char f=s[i];
            j=i;
            
                while(s[j] == f){
                    j++;
                    f=f+1;
                    
                }
                ans=max(ans,j-i);
                i=j-1;
            
        }
        return ans;
    }
};