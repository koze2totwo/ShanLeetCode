class Solution {
public:
    int longestBeautifulSubstring(string w) {
     
        int i=0,j=1,n=w.size(),result=0;
        int count=1;

        while(j<n){
            while(w[j]>=w[j-1]){
                if(w[j]>w[j-1]){
                count++;}
                j++;
            }
            cout<<count<<endl;
            if(count==5){
                result=max(result,j-i);
            }
        
                 i=j;
                 j++;
               
                 count=1;
            
           
        }
      
        return result;


        
    }
};