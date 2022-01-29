class Solution {
public:
    double x;
    double y;
    double r;
    Solution(double radius, double x_center, double y_center) {
        x=x_center;
        y=y_center;
        r=radius;
    }
    vector<double> randPoint(){
        double rad=(double)rand()/RAND_MAX;
        rad=sqrt(rad)*r;
        double theta=(double)rand()/RAND_MAX;
        theta*=360.0;
        return {x+rad*cos(theta),y+rad*sin(theta)};
    }
};