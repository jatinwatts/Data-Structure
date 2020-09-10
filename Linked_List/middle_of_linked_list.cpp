int getMiddle(Node *head)
{
    Node * p = head;
    Node * q = head;
    int i=0;
    while(p!=NULL){
        p=p->next;
        i=i+1;
        if(i%2==0){
            q=q->next;
        }
    }
    return q->data;
   // Your code here
}
