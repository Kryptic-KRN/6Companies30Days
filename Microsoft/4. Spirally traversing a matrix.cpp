class Solution{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
        // code here 
        vector<int> ans;
        int ri=0,rt=r-1,ci=0,ct=c-1;
        while(ri<=rt || ci<=ct){
            if(ri<=rt){
                for(int i=ci;i<=ct;i++){
                    ans.push_back(matrix[ri][i]);
                }
                ri++;
            }
            if(ci<=ct){
                for(int i=ri;i<=rt;i++){
                    ans.push_back(matrix[i][ct]);
                }
                ct--;
            }
            if(ri<=rt){
                for(int i=ct;i>=ci;i--){
                    ans.push_back(matrix[rt][i]);
                }
                rt--;
            }
            if(ci<=ct){
                for(int i=rt;i>=ri;i--){
                    ans.push_back(matrix[i][ci]);
                }
                ci++;
            }
        }
        return ans;
    }
};