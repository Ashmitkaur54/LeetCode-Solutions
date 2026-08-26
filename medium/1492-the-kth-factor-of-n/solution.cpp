class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
