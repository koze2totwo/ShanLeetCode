class Solution {
public:
    bool ispossible(vector<int>& nums,int mid, int k){
        int n=nums.size(), sum=0,c=1;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
                
            }
            else{
                 sum=nums[i];
            c++;
            if(c>k || nums[i]>mid){
                return false;
            }
            }
           
        }
       
        return true;;
    }
    int splitArray(vector<int>& nums, int k) {
       int l =0,r=accumulate(nums.begin(),nums.end(),0);
       int ans=-1;
       while(l<=r){
        int mid = l+(r-l)/2;
        if(ispossible(nums,mid,k)){
            ans=mid;
            r=mid-1;
        }
        else{l=mid+1;}
       } 
       return ans;
    }
};