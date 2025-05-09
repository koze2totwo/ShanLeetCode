bool isPalindrome(int x) {
    long int rev=0;
    int n=x;
    int m=pow(2,31)-1;
    int l = pow(2,31)*-1;
    if(x>m || x<l){
        return false;
    }
    if(x<0){
        return false;
    }
    while(x!=0){
        rev=rev*10+x%10;
        x=x/10;
    }
    
    if(rev == n){
        return true;
    }
    else{
        return false;
    }
}