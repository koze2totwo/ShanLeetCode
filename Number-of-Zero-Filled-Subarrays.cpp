class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int j=0;
        //simple sliding window solution 
        for(int i = 0;i<nums.size();i++){
           j=i;
           int c=0;
            while(j<nums.size() && nums[j]==0){
                j++;
            }
            c=j-i;
            i=j;
            ans=ans+ (long long)(((long long)c*(c+1))/2); //used long to due to int exceeding value while multiplying 
            //formula to add to ans for each subarrray


        }
        return ans;
    }
};