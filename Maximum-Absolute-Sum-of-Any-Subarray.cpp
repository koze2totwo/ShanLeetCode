class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
         int MaxSubSum=nums[0],CurrentSubSum=nums[0],currMin=nums[0],minSum=nums[0];
         //kadane's algorithm to calculate max subarray and min subaaray sum return the max of between them in absolute value
        for(int i=1;i<nums.size();i++){
            CurrentSubSum=max(nums[i],CurrentSubSum+nums[i]);
            MaxSubSum=max(MaxSubSum,CurrentSubSum);
            currMin=min(nums[i],currMin+nums[i]);
            minSum=min(minSum,currMin);



        }
        return max(MaxSubSum,abs(minSum)); 
    }
};