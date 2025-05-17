class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(3,0);
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                v[0]++;
            }
            else if(nums[i]==1){
                v[1]++;
            }
            else{
                v[2]++;
            }

        }
        int j=0;
      
        for(int i =0;i<nums.size();i++){
            
            while(v[j]!=0){
                cout<<"hello"<<endl;
                nums[i]=j;
                i++;
                v[j]--;
            }
            i--;
            j++;
        }
    }
};