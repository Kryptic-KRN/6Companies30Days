class Solution {
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        vector<int> lis;
        unordered_set<int> s;
        for(int i=0;i<M;i++){
            s.insert(B[i]);
        }
        for(int i=0;i<N;i++){
            if(s.find(A[i])!=s.end()){
                auto it=lower_bound(lis.begin(),lis.end(),A[i]);
                if(it==lis.end())
                    lis.push_back(A[i]);
                else
                    *it=A[i];
            }
        }
        return N+M-2*lis.size();
    }
};