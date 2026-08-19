class Solution {
public:
    bool prime(int x){
        if(x<2){
            return false;
        }
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int k=0;
        int l=0;
        int maxi=0;
        while(k<nums.size() && l<nums[0].size()){
            if(prime(nums[k][l])==true){
                maxi=max(maxi,nums[k][l]);
            }
            k++;
            l++;
        }
        k=0;
        l=nums[0].size()-1;
        while(k<nums.size() && l>=0){
            if(prime(nums[k][l])==true){
                maxi=max(maxi,nums[k][l]);
            }
            k++;
            l--;
        }
        return maxi;
    }
};