class Solution {
public:
    int countPrimes(int n) {
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

        for(int j=2;j<n;j++){
            if(v[j]==1){
                count++;
            }
        }

        return count;
    }
};
