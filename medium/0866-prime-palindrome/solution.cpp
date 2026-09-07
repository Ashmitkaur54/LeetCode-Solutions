class Solution {
public:
    bool palindrome(int n){
        int n1=0;
        int rev=0;
        int original=n;
        n1=n%10;
        rev=rev*10+n1;
        n/=10;
        if(original==rev){
            return true;
        }
        else{
            return false;
        }
    }
    bool prime(int n){
        for(int i=0;i*i<n;i++){
            if(n%i==0){
                return true;
            }
            else{
                return false;
            }
        }
    }
    int primePalindrome(int n) {
        int ans=0
        while(true){
            if(prime(n) && palindrome(n)){
                ans = n;
            }
            n++;
        }
        return ans;
    }
};