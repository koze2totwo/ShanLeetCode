class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(),n=mat[0].size();
//i+j method to store the element in map and then pushing in oreder
//i+j method of traversing matrix diagonally
        vector<int> ans;
        map<int,vector<int>> mp;
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool flip=false;
        for(auto &x:mp){
            if(!(x.first & 1)){
                reverse(x.second.begin(),x.second.end());
            }
        
                for(auto item:x.second){
                    ans.push_back(item);
                }
                
            
        }
        return ans;
    }
};