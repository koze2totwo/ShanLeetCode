class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int rsum=0,n=nums.size();
        for(int i=0;i<n;i++){
            rsum+=nums[i];
        }
        int lsum=0,ans=0;
        for(int i = 0;i<n-1;i++){
            lsum+=nums[i];
            rsum=rsum-nums[i];
            int par = abs(rsum-lsum)&1 ;
            if(par == 0){
                ans++;
            }
        }
        return ans;
    }
};