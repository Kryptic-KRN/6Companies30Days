class Solution{
    void OptimalParanthesis(int i, int j, int n, int brackets[101][101], char& name, string &s){
        if(i==j){
            s.push_back(name++);
            return;
        }
        s.push_back('(');
        OptimalParanthesis(i,brackets[i][j], n, brackets, name,s);
        OptimalParanthesis(brackets[i][j] + 1, j, n, brackets, name,s);
        s.push_back(')');
    }
public:
    string matrixChainOrder(int p[], int n){
        // code here
        int t[101][101];
        int brackets[101][101];
        int i,j,k,temp;
        int min=0;
        for(int i=0;i<n;  i++){
            t[i][i] = 0;
        }
        for(int L=2; L<n; L++){
            for(int i=0; i<n-L+1; i++){
                int j = i+L-1;
                t[i][j] = INT_MAX;
                for(int k=i; k<j; k++){
                    temp = t[i][k] + t[k+1][j] + p[i-1]*p[k]*p[j];
                    if(temp<t[i][j]){  
                        t[i][j] = temp;
                        brackets[i][j] = k;
                        
                    }
                }
            }
        }
        char name = 'A';
        string s;
        OptimalParanthesis(1, n-1, n, brackets , name, s);
        return s;
    }
};