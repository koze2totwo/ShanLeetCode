class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k = *max_element(nums.begin(),nums.end());//AND of two numbers a1 and a2 is always less than both numbers or equal to the min(a1,a2)
        //so the max possible AND value of nums is the max value in nums i.e. K 
        //we just need to find the subarray with most number of value equal to K i.e. longest subarray with all value equal to K 
        // find that subarray using a simple sliding window approach
        int ans=1;
        int n = nums.size();
        for(int i=0;i<n;i++){
          int j = i ;
          while(j<n && nums[j]==k){
            j++;
          }
          ans=max(ans,j-i);
          i=j;

        }
        return ans;
    }
};