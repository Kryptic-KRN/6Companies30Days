class Solution{
  public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n){
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<string> ans;
        int x=0;
        string s;
        for(auto i:m){
            if(i.second>x){
                x=i.second;
                s=i.first;
            }
        }
        ans.push_back(s);
        ans.push_back(to_string(x));
        return ans;
    }
};