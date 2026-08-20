class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        int high=num;
        bool ans=false;
        while(low<=high){
            int mid=(low+high)/2;
            if(1LL*mid*mid==num){
                ans=true;
                break;
            }
            else if(1LL*mid*mid<num){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};