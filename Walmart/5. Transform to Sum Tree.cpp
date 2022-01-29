class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int helper(Node* root){
        if(root==NULL) return 0;
        return helper(root->left)+helper(root->right)+root->data;
    }
    void toSumTree(Node *root){
        // Your code here
        if(root==NULL) return;
        int sum=helper(root)-root->data;
        root->data=sum;
        toSumTree(root->left);
        toSumTree(root->right);
    }
};