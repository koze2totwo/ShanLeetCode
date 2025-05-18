class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size(),w2=word2.size();
        int i=0,j=0;
        string result="";
        while(i<w1 || j<w2){
           if(i<w1){ result=result +word1[i];
            i++;}
            if(j<w2){
                result=result+word2[j];
                j++;
            }
        }
        
        return result;
    }
}
;