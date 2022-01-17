class Solution{
public:
    int minSteps(int D){
        // code here
        int steps=0;
        int sum=0;
        while(sum<D) {
            sum+=steps;
            steps++;
        }
        while((sum-D)%2) {
            sum+=steps;
            steps++;
        }
        return steps-1;
    }
};