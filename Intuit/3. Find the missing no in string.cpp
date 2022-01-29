long long helper(string s){
    int n=s.size();
    long long x=0;
    for(int i=0;i<n;i++){
        x=x*10+s[i]-'0';
    }
    return x;
}

int missingNumber(const string& str){
    int n=str.size();
    for(int l=1;l<=6;l++){
        int i=0;
        string s=str.substr(i,l);
        long long prev=helper(s);
        int c=0,flag=0;
        s="";
        long long ans;
        int j=l;
        while(j<str.size()){
            s=s+str[j];
            j++;
            if(prev+1==helper(s)){
                prev=helper(s);
                s="";
            }
            else if(prev+2==helper(s)){
                c++;
                ans=prev+1;
                prev=helper(s);
                s="";
            }
            else if(prev<helper(s)){
                flag=1;
            }
        }
        if(c==1 && flag==0){
            return ans;
        }
    }
    return -1;
}