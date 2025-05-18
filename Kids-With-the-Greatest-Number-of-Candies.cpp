class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool> result;
        int maxc = *max_element(begin(candies),end(candies));
        for(int i = 0; i<candies.size();i++){
            if(candies[i]+e >= maxc){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};