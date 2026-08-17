class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool ans=true;
        string temp;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]==strs[j][i]){
                    ans=true;
                }
                else{
                    ans=false;
                    break;
                }
            }
            if(ans==true){
                temp.push_back(strs[0][i]);
            }
            else{
                break;
            }
       }
       return temp; 
    }
};