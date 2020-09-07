Node* segregate(Node *head) {
    Node *p = head;
    int a=0,b=0,c=0;
    while(p!=NULL)
    {
        if(p->data==0)
        a++;
        if(p->data==1)
        b++;
        if(p->data==2)
        c++;
    p=p->next;
    }
    p=head;
    for(int i=1;i<=a+b+c;i++)
    {
        if(i<=a)
        p->data=0;    
        if(a<i && i<=a+b)
        p->data=1;
        if(a+b<i && i<=a+b+c)
        p->data=2;
        p=p->next;
    }
    return head;
    // Add code here
    
}
