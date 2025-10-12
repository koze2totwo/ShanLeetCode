class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            
            if(mp[nums[i]]%k==0){

                ans+=nums[i];
            }
        }return ans;
    }
};