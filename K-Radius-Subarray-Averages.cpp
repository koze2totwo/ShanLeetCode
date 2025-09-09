class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> v;
        int s=(k*2)+1 ;
        
        long long sum=0,j=0,n=nums.size();
        int m=0;
        while(m<nums.size()&&m<k){
            v.push_back(-1);
            m++;
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
           
            
            while(i<n &&j<n && i-j+1 == s){
                cout<<j<<" ";
                v.push_back(sum/s);
            if(i<n-1)
                {i++;
                sum=sum+nums[i]-nums[j];
                }
            j++;
            }
            
        }
        
        while(m<nums.size()&&m<k*2){
            v.push_back(-1);
            m++;
        }
        return v;
    }
};