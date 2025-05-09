class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int sor=0;
        for(auto x:mp){
            if(x.second == 2){
                sor^=x.first;
            }
        }
        return sor;
        
    }
};