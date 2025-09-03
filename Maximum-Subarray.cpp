class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadanes's algorithm
        int MaxSubSum=nums[0],CurrentSubSum=nums[0];
        for(int i=1;i<nums.size();i++){
            CurrentSubSum=max(nums[i],CurrentSubSum+nums[i]);
            MaxSubSum=max(MaxSubSum,CurrentSubSum);
        }
        return MaxSubSum;
    }
};