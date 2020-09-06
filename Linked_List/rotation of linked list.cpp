Node* rotate(Node* head, int k)
{
    Node *p=head;
    Node *q=head;
    Node *s;
    if(p->data)
    for(int i=0;i<k-1;i++){
        p=p->next;
    }
    if(p->next==NULL){
        return head;
    }
    while(q->next!=NULL){
        q=q->next;
    }
    s=p->next;
    q->next=head;
    p->next=NULL;
    return s;
    // Your code here
}
