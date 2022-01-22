class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int x=0;
        for(int i=0;i<str.length();i++){
            if(i==0){
                if(str[i]=='-') continue;
            }
            if(str[i]<'0' || str[i]>'9')
                return -1;
            x=(10*x)+str[i]-'0';
        }
        return (str[0]=='-')?-1*x:x;
    }
};