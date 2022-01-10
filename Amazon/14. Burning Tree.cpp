class Solution {
  public:
  int ans=0;
  int burner(Node* root,int t) {
      if(root==NULL) 
        return 0;
      int x=burner(root->left,t), y=burner(root->right,t);
        if(root->data==t){
            ans=max(x,y);
            return -1;
        }
        if(x<0){
            x=abs(x);
            ans=max(ans,x+y);
            return -1-x;
        }
        if(y<0){
            y=abs(y);
            ans=max(ans,x+y);
            return -1-y;
        }
        if(x<y) return(y+1);
        else return x+1;
  
   }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        burner(root,target);
        return ans;
    }
};