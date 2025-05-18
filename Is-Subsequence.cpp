class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns=s.size(),nt=t.size();
        int i=0,j=0,k=0;
        while(j<nt){
            if(s[i] == t[j]){
                i++;
                j++;
                continue;
            }
            j++;
        }
        return i == ns;
    }
};