class Solution {
public:



    bool checkPrimeFrequency(vector<int>& nums) {
       map<int,int> mp;
       for(int x:nums){
        mp[x]++;
       } 
    int n=100;  

    vector<bool> prime(n + 1, true);
    prime[1]=false;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p){
            prime[i] = false;
            }
        }
    }

    for(auto x:mp){
        if(prime[x.second]==true){
            return true;
        }
    }
    return false;
    
    }
};