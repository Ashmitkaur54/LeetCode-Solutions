class Solution {
public:
    bool check(int x){
        if(x<2){
            return false;
        }
        for(int k=2;k*k<=x;k++){
            if(x%k==0){
                return false;
                break;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(check(it.second)==true){
                return true;
            }
        }
        return false;
    }
};