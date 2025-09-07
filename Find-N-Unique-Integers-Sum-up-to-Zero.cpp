class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        for(int i=1;i<=n/2;i++){
            v.push_back(-1*(2*i));
            v.push_back(2*i);
        }
        if(n&1){
            v.push_back(0);
        }
        return v;
    }
};