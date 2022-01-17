vector<string> generate(int N){
    // Your code here
    vector<string> ans;
    for(int i=1;i<=N;i++){
        int num=i;
        string s;
        while(num>0){
            int b=num&1;
            s=to_string(b)+s;
            num/=2;
         }
         ans.push_back(s);
    }
    return ans;
}