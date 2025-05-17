class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,n=chars.size(),idx=0;
        while(i<n){
            char curr_char = chars[i];
            int count =0;
            while(i<n && curr_char==chars[i]){
                i++;
                count++;
            }
            chars[idx]=curr_char;
            idx++;
            string val = to_string(count);
            if(count>1){
                for(char x:val){
                    chars[idx++]=x;
                }
            }
           
        }
        return idx;
    }
};