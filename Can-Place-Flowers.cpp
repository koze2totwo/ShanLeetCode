class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int fs = f.size();
        if(fs==1 && f[0]==0){
            return 1;
        }
        for(int i = 0 ;i<fs;i++){
           if(i == 0 && f[i]==0 && f[i+1]==0){
            n--;f[i]=1;}
            else if(i == fs-1 && f[i]==0 ){
                if(f[i-1] == 0){
                n--;f[i]=1;}
                else{
                    continue;
                }
            }
            else{
                if(f[i]==0 && f[i+1]==0 && f[i-1]==0){
                    n--;
                    f[i]=1;
                }
            }
        }
        cout<<n;
        return n<=0;
    }
};