        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans=true;
            }
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    ans=false;
                }
                    break;
