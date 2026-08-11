class Solution {
public:
    int firstone(vector<int>& v) {
        int low = 0;
        int high = v.size() - 1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(v[mid] == 1) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi = 0;
        int rowIndex = 0;

        for(int i = 0; i < mat.size(); i++) {
            int count = 0;

            for(int j = 0; j < mat[i].size(); j++) {
                count += mat[i][j];
            }

            if(count > maxi) {
                maxi = count;
                rowIndex = i;
            }
        }

        return {rowIndex, maxi};
    }

};