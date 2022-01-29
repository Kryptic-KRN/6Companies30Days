class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        int x=INT_MAX;
        int y=INT_MIN;
        int l=0; int r=N-1;
        while(l<r){
            x=min(x,arr[l]);
            y=max(y,arr[r]);
            if(y>x){
                for(int i=l+1;i<=r-1;i++){
                    if(arr[i]<y && arr[i]>x) return {x,arr[i],y};
                }
            }
            l++;
            r--;
        }
        return {};
    }
};