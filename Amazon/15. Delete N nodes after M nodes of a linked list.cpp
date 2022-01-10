class Solution
{
    public:
    void linkdelete(struct Node *head, int M, int N)
    {
        //Add code here  
        Node* t1=head;
        while(t1){
            for(int i=1;i<M && t1;i++){
                t1=t1->next;
            }
            if(!t1) return;
            Node* t2=t1;
            for(int j=0;j<=N && t2;j++){
                t2=t2->next;
            }
            t1->next=t2;
            t1=t2;
        }
    }
};