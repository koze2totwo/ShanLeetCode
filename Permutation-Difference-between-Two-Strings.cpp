class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum=0;
        map<char,int> mp;
        for(int i =0;i<s.size();i++){
            mp[s[i]]=i;
        }
        for(int i=0;i<t.size();i++){
            sum += abs(i-mp[t[i]]);
        }
        return sum;
    }
};