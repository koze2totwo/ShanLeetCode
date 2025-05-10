class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> v(n+1,1);
        int count=0;
        for(int i=2;i*i<=n;i++){
            if(v[i]==1){
                int j=i*i;
                while(j<=n){
                    v[j]=0;
                    j+=i;
                }
            }
        }
        v[0]=0;
        v[1]=0;
        vector<vector<int>> r;
        for(int i=2;i<n;i++){
            int remain = n-i;
            if(v[remain]==1 && v[i]==1){
                
                r.push_back({i,remain});
                v[remain]=0;
                v[i]=0;
            }
        }
        return r;
    }
};