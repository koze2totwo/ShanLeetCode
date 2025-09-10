class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> mp;
        
        for(auto x:nums){
            mp[x]++;
            //it would be impossible to split the in two parts if there is an elememt with frequency more than 2
            if(mp[x]>2){
                return false;
            }
        }
        return true;
    }
};