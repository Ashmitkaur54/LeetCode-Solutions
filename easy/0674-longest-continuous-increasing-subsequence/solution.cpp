class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int i=1;i<nums.size();i++){
