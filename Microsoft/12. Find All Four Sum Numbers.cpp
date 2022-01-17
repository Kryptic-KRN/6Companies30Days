class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int N=arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<N-1;i++) {
            for(int j=i+1;j<N;j++) {
                int X=k-(arr[i]+arr[j]);
                int l=j+1, h=N-1;
                while(l<h) {
                    if(arr[l]+arr[h]<X)
                        l++;
                    else if(arr[l]+arr[h]>X)
                        h--;
                    else { 
                        vector<int> temp={arr[i],arr[j],arr[l],arr[h]};
                        ans.push_back(temp);
                        while(l<h && arr[l]==temp[2]) l++;
                        while(l<h && arr[h]==temp[3]) h--;
                    }
                }
                while(j+1<N && arr[j+1]==arr[j]) j++;
            }
            while(i+1<N-1 && arr[i+1]==arr[i]) i++;
        }
        return ans;
    }
};