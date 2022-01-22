class Solution{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s){
        // Your code here
        int l=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(sum>=s){
                if(sum==s){
                    return vector<int>{l+1,i+1};
                }
                sum-=arr[l];
                l++;
            }
        }
        return vector<int>{-1};
    }
};