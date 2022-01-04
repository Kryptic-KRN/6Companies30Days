class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string,vector<string>> m;
        vector<vector<string>> ans;
        for(auto s:string_list){
            string x=s;
            sort(x.begin(),x.end());
            m[x].push_back(s);
        }
        for(auto itr:m){
            ans.push_back(itr.second);
        }
        return ans;
    }
};