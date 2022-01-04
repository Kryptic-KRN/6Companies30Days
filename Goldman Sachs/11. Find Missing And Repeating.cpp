class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *a =new int[2];
        int i=0;
        while(i<n){
            while(arr[i]!=arr[arr[i]-1] && i<n) swap(arr[i],arr[arr[i]-1]);
            i++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                a[0]=arr[i];
                a[1]=i+1;
            }
        }
        return a;
    }
};