class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int maxi=0;
        for(auto k:st){
            if(st.find(k-1)==st.end()){
                int x=k;
                int count=1;
                while(st.find(x+1)!=st.end()){
                    x++;
                    count++;
                }
                maxi=max(maxi,count);

            }
        }
        return maxi;
    }
};