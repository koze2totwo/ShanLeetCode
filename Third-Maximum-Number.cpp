class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1=LONG_MIN,max2=LONG_MIN,max3=LONG_MIN+1;
        for(int num:nums){
            if(num>max1){
                max3=max2;
                max2=max1;
                max1=num;
            }
            else if(num>max2 && num!=max1){
                max3=max2;
                max2=num;
            }
            else if(num>max3 && num!=max2 && num!=max1){
                max3=num;
                
            }}
        if(max3==LONG_MIN){return max1;}
        return max3;
    }
};