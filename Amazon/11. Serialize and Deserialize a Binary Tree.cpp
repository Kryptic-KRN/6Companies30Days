class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> ans;
    void inorder(Node* root){
        if(!root)
            return;
        inorder(root->left);
        ans.push_back(root->data);
        inorder(root->right);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        inorder(root);
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       Node* root=new Node(-1);
       Node* temp=root;
       for(int i=0;i<A.size();i++){
           temp->right=new Node(A[i]);
           temp=temp->right;
       }
       return root->right;
    }

};