class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;;
        }
        bool ans=false;
        for(auto k:mp){
            if(k.second>=2){
                ans=true;
            }
        }
        return ans;
    }
};