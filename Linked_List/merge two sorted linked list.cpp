Node* sortedMerge(Node* head1, Node* head2)  
{  
    while(head1!=NULL || head2!=NULL)
    {
        if(head1==NULL)
        {
            while(head2!=NULL)
            {
                cout<<head2->data<<" ";
                head2=head2->next;
            }
            return head2;
        }
        if(head2==NULL)
        {
            while(head1!=NULL)
            {
                cout<<head1->data<<" ";
                head1=head1->next;
            }
            return head1;
        }
        if(head1->data>=head2->data)
        {
            cout<<head2->data<<" ";
            head2=head2->next;
        }else
            {
                cout<<head1->data<<" ";
                head1=head1->next;
            }
    }
    // code here
}  
