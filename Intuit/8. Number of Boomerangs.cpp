class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        const int n=points.size();
        int arr[n];
        int ans=0;
        for(const auto &p:points) {
            for(int j=0;j<n; j++) {
                int a=p[0]-points[j][0];
                int b=p[1]-points[j][1];
                arr[j]=a*a+b*b;
            }
            sort(arr,arr+n);
            for(int k=0; k<n;k++){
                int next=k;
                while(next+1<n && arr[next+1]==arr[k]) {
                    next++;
                }
                if(next>k){
                    ans+=(next-k+1)*(next-k);
                }
                k=next;
            }
        }
        return ans;
    }
};