class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int itr = -1;
        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                itr = i;
                break;
            }
        }
        if(itr == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int j = nums.size()-1; j >= 0; j--){
            if(nums[j] > nums[itr]){
                swap(nums[j], nums[itr]);
                break;
            }
        }

        sort(nums.begin()+itr+1,nums.end());
    }
};