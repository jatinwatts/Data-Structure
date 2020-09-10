void removeLoop(Node* head)
{
    Node *p=head;
    map<Node *, int> mp;
    mp[p]++;
    while(p!=NULL)
    {
        mp[p->next]++;
        if(mp[p->next]==2){
            p->next=NULL;
            return;
        }
        p=p->next;
    }
    // code here
    // just remove the loop without losing any nodes
}
