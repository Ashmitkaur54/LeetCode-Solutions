class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0;
        int i=0;
        int count=0;
        int j;
        while(i<chars.size()){
            int j=i;
            while(j<chars.size() && chars[i]==chars[j]){
                j++;
            }
            count=j-i;
            chars[write++]=chars[i];
            if(count>1){
                string s=to_string(count);
                for(char ch : s){
                    chars[write++] = ch;
                }
            }
            i=j;
        }
        return write;
    }
};