Node* pairWiseSwap(struct Node* head) {
    Node *p=head;
    int temp;
    Node *q = p->next;
    if(p->next==NULL)return head;
    while(p->next->next!=NULL)
    {
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        p=p->next->next;
        if(p->next==NULL)
        return head;
        q=p->next;
        
    }
       temp=p->data;
        p->data=q->data;
        q->data=temp;
    return head;
    // The task is to complete this method
}
