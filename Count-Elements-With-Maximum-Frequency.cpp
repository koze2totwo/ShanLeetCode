class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int m=0;
        for(int x:nums){
            mp[x]++;
            m=max(m,mp[x]);
        }
        int ans=0;
        for(auto x:mp){
            if(x.second==m){
                ans+=m;
            }
        }
        return ans;

    }
};