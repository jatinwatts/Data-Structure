Node * removeDuplicates( Node *head) 
{
    Node *p =head;
    Node *q;
    while(p!=NULL)
    {
        q=p;
        while(q->next!=NULL)
        {
            if(p->data==q->next->data)
            {
                q->next=q->next->next;
            }else
             q=q->next;
        }
        p=p->next;
    }
    return head;
 // your code goes here
}
