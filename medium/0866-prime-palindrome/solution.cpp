class Solution {
public:
    bool palindrome(int n){
        int n1=0;
        int rev=0;
        int original=n;
        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        return original == rev;
    }
    bool prime(int n){
        bool a=true;
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a=false;
                break;
            }
        }
        return a;
    }
    int primePalindrome(int n) {
        int ans=0;
        while(true){
            if(prime(n) && palindrome(n)){
                ans = n;
                break;
            }
            n++;
        }
        return ans;
    }
};