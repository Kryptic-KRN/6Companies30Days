class Solution
{
    public:
    void helper(string str, string &s, int k, int pos){
        if(k==0) return;
        char m=str[pos];
        for(int i=pos+1;i<str.length();i++){
            if(m<str[i])
                m=str[i];
        }
        if(m!=str[pos]) k--;
        for(int i=str.length()-1;i>=pos;i--){
            if(str[i]==m){
                swap(str[i],str[pos]);
                if(str.compare(s)>0)
                    s=str;
                helper(str,s,k,pos+1);
                swap(str[i],str[pos]);
            }
        }
    }
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k){
       // code here.
       string s=str;
       helper(str,s,k,0);
       return s;
    }
};