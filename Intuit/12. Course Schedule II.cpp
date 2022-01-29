class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites){
        vector<vector<int>> dep(n);
        for(const auto& pre:prerequisites)
            dep[pre[0]].push_back(pre[1]);
        vector<int> ans;
        vector<int> taken(n);
        function<bool(int)> helper=[&](int c){
            taken[c]=2;
            for(const int& nxt:dep[c]){
                if(taken[nxt]==2)
                    return 0;
                if(taken[nxt]==0)
                    if (!helper(nxt))
                        return 0;
            }
            ans.push_back(c);
            taken[c]=1;
            return 1;
        };
        for(int i=0;i<n;i++) {
            if(taken[i])
                continue;
            if(!helper(i))
                return{};
        }
        return ans;
    }
};