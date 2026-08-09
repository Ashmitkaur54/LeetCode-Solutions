            for(int i=0;i<weights.size();i++){
                if(weights[i]+load<=mid){
                    load+=weights[i];
                }
                else{
                    d++;
                    load=weights[i];
