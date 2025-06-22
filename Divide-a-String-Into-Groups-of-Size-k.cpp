class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n =s.size();
        
            for(int i=0;i<n;i++){
                int j=0;
                string add ="";
                while(i+j<n && j<k){
                    add=add+s[i+j];
                    j++;
                }   
                i=i+j-1;
                ans.push_back(add);
            }
            int poss=n/k;
            if(n%k != 0 ){
               string add= ans[poss];
               while(add.size()<k){
                add+=fill;
               }
               ans[poss]=add;
            }
        
        return ans;
    }
};