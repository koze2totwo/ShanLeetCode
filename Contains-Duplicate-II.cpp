class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            //see if the number is present if present then check for condition
            if(mp.count(nums[i])){
                if(abs(i-mp[nums[i]])<=k){
                    return true;
                }
            }
            //update the last index seen does matter higher the number the better 
            //due to k being always greater than 0 two bigger number will always help
            mp[nums[i]]=i;
        }
return false;
        
    }
};