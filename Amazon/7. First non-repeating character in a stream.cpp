class Solution {
     public:
        string FirstNonRepeating(string a){
            // Code here
            string ans="";
            queue<char> q;
            int hash[26]={0};
            int i;
            for(auto it:a){
                i=it-'a';
                if(hash[i]==0) q.push(it);
                hash[i]++;
                while(!q.empty() && hash[q.front()-'a']!=1) q.pop();
                if(q.empty()) ans+='#';
                else ans+=q.front();   
            }
            return ans;
        }
};