class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int num = left; num <= right; num++) {
            int n = num;
            bool flag = true;

            while(n > 0) {
                int digit = n % 10;

                if(digit == 0 || num % digit != 0) {
                    flag = false;
                    break;
                }

                n = n / 10;
            }

            if(flag) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};