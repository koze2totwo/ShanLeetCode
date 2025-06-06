class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int j=0,ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(i+1<n && nums[i]>=nums[i+1]){
                ans=max(ans,i-j+1);
                j=i+1;
            }
            ans=max(ans,i-j+1);
            }
return ans;
    }
};