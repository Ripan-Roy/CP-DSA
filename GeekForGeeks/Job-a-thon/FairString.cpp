string str[5];
        bool flag=0;
        for(int i=0;i<N;i=i+2){
            if (!flag){
                str[1].push_back('0');
                str[1].push_back('0');
                str[2].push_back('1');
                str[2].push_back('1');
            }
            else{
                str[2].push_back('0');
                str[2].push_back('0');
                str[1].push_back('1');
                str[1].push_back('1');
            }
            flag=!flag;
        }
        for(int i=0;i<N;i++){
            if(!flag){
                str[3].push_back('0');
                str[4].push_back('1');
            }
            else{
                str[4].push_back('0');
                str[3].push_back('1');
            }
            flag=!flag;
        }
        int count=2e9;
        for(int j=1;j<5;j++){
            int ans=0;
            for (int i=0;i<N;i++){
                if (S[i] != str[j][i]){
                    ans=ans+C[i];
                }
            }
            count=min(count, ans);
        }
        return count;