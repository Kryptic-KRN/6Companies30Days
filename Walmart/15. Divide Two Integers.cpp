class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        long a=abs(dividend);
        long b=abs(divisor);
        long res=0;
        while(a-b>=0){
            long temp=b;
            long cnt=1;
            while(a>=(temp<<1)){
                temp<<=1;
                cnt<<=1;
            }
            res+=cnt;
            a-=temp;   
        }
        return ((dividend<0)^(divisor<0))?-res:res;
    }
};