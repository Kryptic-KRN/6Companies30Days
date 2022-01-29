class Solution {
public:
    int helper(vector<int>& w, int cap){
        int days=1; int cur_cap =0;
        for(auto x:w){
            cur_cap+=x;
            if(cur_cap>cap){
                cur_cap=x;
                days++;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int n=w.size(); int mn=INT_MIN;
        int mx =0;
        for(int i=0;i<n;i++){
                mn=max(mn,w[i]);
                mx=mx+w[i];
        }
        while(mn<=mx){
            int mid=mn+(mx-mn)/2;
            int g=helper(w,mid);
            if(g>days){
                mn=mid+1;
            }
            else{
                mx=mid-1;
            }
        }
        return mn;
    }
};