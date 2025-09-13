class Solution {
public:
    string sortVowels(string s) {
      vector<char> v;
      int n=s.size();
      for(char x:s){
        if(x=='a' || x=='e' || x=='i' || x=='o'||x=='u' || x=='A' || x=='E' || x=='I' || x=='O'||x=='U'){
            v.push_back(x);

        }
      }  


        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'||s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'||s[i]=='U'){
            s[i]=v[j];
            j++;

        }
        }
        return s;
    }
};