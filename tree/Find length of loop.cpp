int countNodesinLoop(struct Node *head)
{
    if(head==NULL) return 0;
    int count = 0;
    struct Node *slow=head;
    struct Node *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
       fast=fast->next->next;
       slow=slow->next;
       if(fast==slow)
       {
           struct Node *temp=slow;
           while(temp->next!=fast)
           {
               count++;
               temp=temp->next;
           }
           return count+1;
       }
    }
    return count;
    // Code here
}
