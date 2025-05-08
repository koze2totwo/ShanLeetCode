class Solution {
public:
    char findTheDifference(string s, string t) {
        int l=0;
        string st=t+s;
        int n=st.size();
        for(int i=0;i<n;i++){
            l=l^st[i];
            
        }
        return l;
    }
};