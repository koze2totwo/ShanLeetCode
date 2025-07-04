class Solution {
public:
    int possibleStringCount(string word) {
        int ans=1;
       for(int i=0;i<word.size()-1;i++){
        int c=1;
        while(word[i]==word[i+1]){
            c++;i++;
        }
        ans+=c-1;
       } 
      
      
       return ans;
    }
};