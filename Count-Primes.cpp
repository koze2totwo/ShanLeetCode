class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n+1,1);
        int count=0;
        for(int i=2;i<n;i++){
            if(v[i]==1){
                count++;
                long j=i*2;
                while(j<=n){
                    v[j]=0;
                    j+=i;
                }
            }
        }

       

        return count;
    }
};