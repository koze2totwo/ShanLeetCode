class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int min1=INT_MAX,min2=INT_MAX,dup=INT_MAX;
        vector<int> v(10,0);
        for(int i=0;i<nums1.size();i++){
            min1=min(min1,nums1[i]);
            v[nums1[i]]=1;
        }
            
            
            
            
            
            for(int j=0;j<nums2.size();j++){
                min2=min(min2,nums2[j]);
                if(v[nums2[j]] ==1){
                    dup=min(dup,nums2[j]);
                }
            }
        
                   if(dup<=9){
                       return dup;
                   }
                  return min(min1*10+min2,min2*10+min1);
        
    }
};
