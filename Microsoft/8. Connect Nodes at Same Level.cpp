class Solution{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root){
       // Your Code Here
        queue<Node*> q; 
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* temp=q.front(); 
            q.pop();
            if(temp==NULL){
                if(!q.empty()) q.push(NULL);
            }
            else{
                temp->nextRight=q.front(); 
                if(temp->left){
                       q.push(temp->left);
                 }
                if(temp->right){
                       q.push(temp->right);
                }
            }
        }
    }
};