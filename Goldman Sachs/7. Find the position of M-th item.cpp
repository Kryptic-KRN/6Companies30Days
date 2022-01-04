class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        int x = K+M-1;
        if(x<=N){
            return x;
        }
        else{
            if(x%N==0) return N;
            else return x%N;
        }
    }
};