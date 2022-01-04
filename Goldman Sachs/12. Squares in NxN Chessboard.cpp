class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        return (N*(N+1)*((2*N)+1))/6;
    }
};