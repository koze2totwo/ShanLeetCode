class Solution {
public:
    string largestGoodInteger(string num) {
      
        string lar = "";
        for(int i=0;i<num.size()-2;i++){
            if(num[i+1]==num[i] && num[i+2]==num[i]){
                if(!lar.empty() && num[i]<lar[0]){
                
                    continue;
                }
              
                lar=num[i];
            }
        }
        
        return lar+lar+lar;
    }
};