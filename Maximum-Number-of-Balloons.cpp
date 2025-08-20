class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;
        for(auto t:text){
            mp[t]++;
        }
        if(mp['a']==mp['b'] && mp['b']==mp['l']/2 && mp['l']/2==mp['o']/2 &&mp['o']/2==mp['n']){
            return mp['a'];
        }
        int count = min({mp['b'], mp['a'], mp['l'] / 2, mp['o'] / 2, mp['n']});
        return count;
    }
};