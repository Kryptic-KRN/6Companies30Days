class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
        ull c2=0, c3=0, c5=0;
        vector<ull> ans(n,1);
        ull i=1;
        while(i<n){
            ull low=min(2*ans[c2],min(3*ans[c3],5*ans[c5]));
            if(low==2*ans[c2]) c2++;
            if(low==3*ans[c3]) c3++;
            if(low==5*ans[c5]) c5++;
            ans[i]=low;
            i++;
        }
        return ans[n-1];
	}
};