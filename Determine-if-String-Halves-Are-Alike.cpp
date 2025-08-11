class Solution {
public:
   
    bool halvesAreAlike(string s) {
        int a=0,b=0;
        int c=0;
        set<char> vow={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<s.size();i++){
            if(c<s.size()/2){
                c++;
                if(vow.count(s[i])){
                    a++;
                }
            }
            else if(vow.count(s[i])){
                b++;
            }
        }
        return a==b;
    }
};