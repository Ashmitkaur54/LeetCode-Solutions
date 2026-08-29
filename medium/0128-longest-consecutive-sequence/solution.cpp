        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto k:st){
            if(st.find(k-1)==st.end()){
                int x=k;
                int count=1;
        int maxi=0;
