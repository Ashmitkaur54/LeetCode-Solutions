class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>v1(265,-1);
        vector<int >v2(265,-1);
        bool ans=true;
        if(s.size()!=t.size()){
            ans=false;
        }
        for(int i=0;i<s.size();i++){
            char ch1=s[i];
            char ch2=t[i];
            if(v1[ch1]==-1 && v2[ch2]==-1){
                v1[ch1]=i;
                v2[ch2]=i;
            }
            else if(v1[ch1]!=v2[ch2]){
                ans=false;
                break;
            }
        }
        return ans;
    }
};