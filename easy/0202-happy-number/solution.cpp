class Solution {
public:
    int check(int n){
        int sum=0;
        while(n>0){
            int k=n%10;
            sum+=k*k;
            n=n/10;
        }
        return sum;

    }
    bool isHappy(int n) {
        set<int>seen;
        while(n!=1){
            if(seen.count(n)){
                return false;
            }
            seen.insert(n);
            n=check(n);
        }
        return true;
    }
};