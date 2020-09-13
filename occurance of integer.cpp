int count(struct node* head, int search_for)
{
    if(head==NULL) return 0;
    return (head->data==search_for) + count(head->next,search_for);
//add your code here
}
