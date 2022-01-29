class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size()-1;
        int s=0;
        int bob=0,alice=0;
        for(int i=0;i<=(n+1)/2;i++){
            if (piles[s]>=piles[n]){
                alice+=piles[s];
                s++;
                if(piles[s]<piles[n]){
                    bob+=piles[s];
                    s++;
                }
                else{
                    bob+=piles[n];
                    n--;
                }
            }
            else{
                alice+=piles[n];
                n--;
                if(piles[s]<piles[n]){
                    bob+=piles[s];
                    s++;
                }
                else{
                    bob+=piles[n];
                    n--;
                }
            }
        }
        return (alice>bob);
    }
};