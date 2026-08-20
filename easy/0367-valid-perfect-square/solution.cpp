class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        int high=num;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid*mid==num){
        int ans=0;
