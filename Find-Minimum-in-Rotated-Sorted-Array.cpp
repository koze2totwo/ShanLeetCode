class Solution {

public:

int getpivot(vector<int>& nums){

        

        int n =nums.size();

        int s=0,e=n-1;

        while(s<e){

            int mid=s +(e-s)/2;

            if(nums[0]<=nums[mid]){

                s=mid+1;

            }

            else{

                e=mid;

            }

        }

        return e;   

    }

    

    int findMin(vector<int>& nums) {

        if(nums[0]<nums[nums.size()-1]){

            return nums[0];

        }

        return nums[getpivot(nums)];

    }

};