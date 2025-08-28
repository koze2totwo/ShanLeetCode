class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n=nums.size();
          vector<bool> prime(n, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
        if(n==1){return nums[0];}
        long long a=0,b=nums[0]+nums[1];
        for(int i=2;i<n;i++){
            if(prime[i]==true){
                a+=nums[i];
            }
            else{
                b+=nums[i];
            }
        }
        return abs(a-b);
    }
};