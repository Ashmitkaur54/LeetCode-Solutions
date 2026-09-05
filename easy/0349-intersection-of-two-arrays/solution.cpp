class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> v;

        for (int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]] = 1;
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (mp[nums2[i]] == 1) {
                mp[nums2[i]] = 2;
            }
        }

        for (auto k : mp) {
            if (k.second == 2) {
                v.push_back(k.first);
            }
        }
        return v;
    }
};