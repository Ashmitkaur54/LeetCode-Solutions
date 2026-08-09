class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            int load=0;
            int d=1;
            for(int i=0;i<weights.size();i++){
                if(weights[i]+load<=mid){
                    load+=weights[i];
                }
                else{
                    d++;
                    load=weights[i];
                }
            }
            if(d<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};