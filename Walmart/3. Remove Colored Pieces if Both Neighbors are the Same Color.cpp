class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice=0,bob=0;
        if(colors.size()<3)
            return 0;
        for(int i=0;i<colors.size()-2;i++){
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A')
                alice++;
            if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B')
                bob++;
        }
        return alice>bob;
    }
};