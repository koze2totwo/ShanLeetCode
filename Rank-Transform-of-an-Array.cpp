class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> ans;
        ans=arr;
        sort(arr.begin(),arr.end());

        map<int,int> mp;
        int n = arr.size();
        int c=1;
        for(int i =0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                
            }
            else{
                mp[arr[i]]=c;
                c++;
            }
                
            
            

        }
        
        for(int i=0;i<ans.size();i++){
            ans[i]=mp[ans[i]];
        }
        return ans;
    }
};