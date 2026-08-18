        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans=true;
            }
            for(int j=i+1;j*j<=i;j++){
                if(i%j==0){
                return 0;
                    ans=false;
                    break;
