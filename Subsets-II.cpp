class Solution {
public:
    void solve(set<vector<int>>& fans,vector<int> ans,vector<int>& nums, int i){
        if(i>=nums.size()){
            fans.insert(ans);
            return;
        }
        solve(fans,ans,nums,i+1);

        ans.push_back(nums[i]);
        solve(fans,ans,nums,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       set<vector<int>> fans;
       vector<int> ans;
       sort(nums.begin(),nums.end());
       solve(fans,ans,nums,0);
       vector<vector<int>> v;
       for(auto i:fans){
        v.push_back(i);
       }
       return v;
    }
};