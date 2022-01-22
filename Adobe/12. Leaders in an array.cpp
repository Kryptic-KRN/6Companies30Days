class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        ans.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(ans.back()<=a[i])
                ans.push_back(a[i]);
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};