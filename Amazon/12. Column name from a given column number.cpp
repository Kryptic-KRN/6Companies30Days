class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string s="";
        while(n!=0){
            n--;
            s=string(1,(n%26)+'A')+s;
            n=n/26;
        }
        return s;
    }
};