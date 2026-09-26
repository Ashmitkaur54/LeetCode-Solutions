class Solution {
public:
    bool even(int i){
        int sum=0;

        while(i>0){
            int a=i%10;
            sum+=a;
            i/=10;
        }

        if(sum%2==0){
            return true;
        }

        return false;
    }

    int countEven(int num) {
        int count=0;

        for(int i=1;i<=num;i++){
            if(even(i)){
                count++;
            }
        }

        return count;
    }
};