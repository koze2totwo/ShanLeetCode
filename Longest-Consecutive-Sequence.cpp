class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int x:nums){
            st.insert(x);
        }
       
        int c=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int t=1;
            while(st.find(++x)!= st.end()){
                t++;
            
            }
            c=max(c,t);
            }
            
        }
        return c;
    }
};