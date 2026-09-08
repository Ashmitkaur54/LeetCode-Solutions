class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>st;
        for(int k:nums){
            st.insert(k);
        }
        vector<int>v;
        for(int i=1;i<=nums.size();i++){
            if(st.find(i)==st.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};