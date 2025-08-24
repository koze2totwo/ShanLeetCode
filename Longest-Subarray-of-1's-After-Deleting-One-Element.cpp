class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,n=nums.size(),zero=0,one=-1,ans=0;
        //simple sliding window
        //keeo track of no of zero if zero become 2 reduce the window size until zero count becomes one again the max legth should be difference between j-i
       
            while(j<n){
                
                if(j<n && nums[j]==0){
                
                    zero++;
                    while(i<n && zero==2){
                    if(i<n && nums[i]==0){
                        zero--;
                        
                    }
                    i++;
                }
            

                }
                j++;
                ans=max(ans,j-i-1);
            


            }
        return ans;
    }
};