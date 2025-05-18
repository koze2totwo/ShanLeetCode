class Solution {
public:
    string compressedString(string word) {
             int i=0,n=word.size(),idx=0;
             string st="";
        while(i<n){
            char curr_char = word[i];
            int count =0;
            while(curr_char==word[i] && count<9 && i<n){
                i++;
                count++;
            }
            st+=to_string(count)+curr_char;
           
        }
        return st;
    }
};