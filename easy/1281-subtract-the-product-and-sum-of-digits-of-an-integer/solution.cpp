class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        int num=0;
        while(n>0){
            num=n%10;
            sum+=num;
            pro*=num;
            n/=10;
        }
        int res=pro-sum;
        return res;
    }
};