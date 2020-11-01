
Node *findIntersection(Node* head1, Node* head2)
{
Node *curr;
unordered_set<int> s;
Node *start=NULL;
Node *end;
for(curr=head2;curr!=NULL;curr=curr->next)
s.insert(curr->data);
for(curr=head1;curr!=NULL;curr=curr->next)
{
if(s.find(curr->data)!=s.end())
{
if(start==NULL)
{
start=curr;
end=start;
}
else{
end->next=curr;
end=end->next;
}
}
}
end->next=NULL;
return start;
}
