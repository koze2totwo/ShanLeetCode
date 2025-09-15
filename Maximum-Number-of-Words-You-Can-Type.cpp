class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int> mp;
        for(char x:brokenLetters){
            mp[x]++;
        }
        int ans=0;
        for(int i=0;i<text.size();i++){
            int word=1;
           
            while(i<text.size() && !isspace(text[i])){
                if(mp.find(text[i]) != mp.end()){
                    word=0;
                }
                i++;
            }
            ans=ans+word;
        }
        return ans;
    }
};