class Solution{
    public:
    vector<string> ans;
    void helper(int pos, int n, int open, int close){
        static char str[100];    
        if(close==n){
            ans.push_back(str);
            return;
        }
        else{
            if(open>close){
                str[pos]=')';
                helper(pos+1,n,open,close+1);
            }
            if(open<n){
                str[pos]='(';
                helper(pos+1,n,open+1,close);
            }
        }
    }
    vector<string> AllParenthesis(int n){
        // Your code goes here
        helper(0,n,0,0);
        return ans;
    }
};