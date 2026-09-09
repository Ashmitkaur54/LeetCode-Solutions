class Solution {
public:
    bool isprime(int a){
        bool ans=true;
        if(a<2){
            ans=false;
        }
        for(int j=2;j*j<=a;j++){
            if(a%j==0){
                ans=false;
                break;
            }
        }
        return ans;
    }
    int countPrimes(int n) {
        int count=0;
        for(int i=2;i<=n;i++){
            if(isprime(i)){
                count++;
            }
            
        }
        return count;
    }
};