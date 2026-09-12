class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>v;
        for(int i=0;i<score.size();i++){
            if(score[i]==5){
