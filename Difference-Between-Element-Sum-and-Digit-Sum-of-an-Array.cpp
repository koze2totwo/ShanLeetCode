class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0,dsum=0;
        for(auto num:nums){
            esum+=num;
             for (int n = num; n > 0; n /= 10) {
                dsum += n % 10; 
            }
        }
        return abs(esum-dsum);
        
    }
};