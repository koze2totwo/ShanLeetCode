class Solution {
public:
    string triangleType(vector<int>& nums) {
        int flag=0;
       if(nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[2]+nums[1]>nums[0]){
        flag=1;

       }
       if(!flag){
        return "none";
       }
       if(nums[0]==nums[1] && nums[1]==nums[2]){
        return "equilateral";
       } 
       if(nums[1]!=nums[0] && nums[1]!=nums[2]&&nums[0]!=nums[2]){
        return "scalene";
       }
       return "isosceles";
    }
};