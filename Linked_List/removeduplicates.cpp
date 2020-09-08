Node *removeDuplicates(Node *root)
{
    Node *p = root;
    Node *q = root->next;
    while(q!=NULL)
    {
        if(p->data==q->data)
        {
            p->next=q->next;
            q=q->next;
        }
        else
        {
            p=p->next;
            q=q->next;
        }
    }
    return root;
 // your code goes here
}
