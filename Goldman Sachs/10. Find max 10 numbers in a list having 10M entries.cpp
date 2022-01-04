class Solution{
  public:
    vector<int> maxNumbers(vector<int>& a) {
        //code here
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> ans;
        for(auto x:a){
            pq.push(x);
            if(pq.size()>10) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};