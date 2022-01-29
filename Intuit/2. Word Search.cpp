class Solution {
public:
    bool helper(vector<vector<char>>& board,string word,int i,int j,int pos){
        int m=board.size();
        int n=board[0].size();
        if(i<0 || j<0 || i>=m || j>=n) return false;
        if(pos==word.length()) return true;
        if(word[pos]==board[i][j]){
            char t=board[i][j];
            board[i][j]='#';
            bool a=helper(board,word,i+1,j,pos+1); 
            bool b=helper(board,word,i-1,j,pos+1);
            bool c=helper(board,word,i,j+1,pos+1);
            bool d=helper(board,word,i,j-1,pos+1);
            board[i][j]=t;
            return a||b||c||d;
        }
        else return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(helper(board,word,i,j,0))
                        return true;
                }
            }
        }
        return false;
    }
};