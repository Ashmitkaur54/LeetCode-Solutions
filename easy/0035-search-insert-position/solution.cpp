class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int lower=nums.size();
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                lower=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lower; 
    }
};