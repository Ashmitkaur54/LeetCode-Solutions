class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
        int sum=0;
