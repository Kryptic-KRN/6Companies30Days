int helper(Node* root, int& X, int& ans){
    if(!root) 
        return 0;
    int total=helper(root->left,X,ans)+helper(root->right,X,ans)+root->data;
    if(total==X)
        ans++;
    return total;
}
int countSubtreesWithSumX(Node* root, int X){
    // Code here
    int ans=0;
    helper(root,X,ans);
    return ans;
}