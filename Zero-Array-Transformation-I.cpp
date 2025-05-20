class Solution {
public:
  
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& qu) {
       int n=nums.size(),q=qu.size(); 
       vector<int> diff(n,0);
       for(int i = 0;i<q;i++){
            
            diff[qu[i][0]]+=1;
            if(qu[i][1]+1<n){
                diff[qu[i][1]+1]-=1;
            }
        }
        
      
       
     
       
         int csum=0;
         
        for(int j=0;j<n;j++){
            csum+=diff[j];
            diff[j]=csum;
            if(nums[j]-diff[j]>0){
                return false;
            }
           
        }
     
 return true;

    }
};