class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int ans=0,prod=1,i=0,j=0;
      if(k<=1){
        return 0;
      }
      int n=nums.size();
      while(j<n){
        prod*=nums[j];
        while(prod>=k){
            prod/=nums[i++];
            
        }
        ans+=j-i+1;
        j++;
      }
      return ans;  
    }

};