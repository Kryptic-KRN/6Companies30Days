class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int l=0, r=mountainArr.length()-1, mid;
        while (l<r){
            mid=l+(r-l)/2;
            if (mountainArr.get(mid)<mountainArr.get(mid+1)){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        int mnt = r;
        l=0;
        r=mnt;
        while(l<=r){
            mid = l + (r-l)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if (mountainArr.get(mid)<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        l=mnt;
        r=mountainArr.length()-1;
        while(l<=r){
            mid= l + (r-l)/2;
            if (mountainArr.get(mid)==target){
                return mid;
            }
            if (mountainArr.get(mid)<target){
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return -1;  
    }
};