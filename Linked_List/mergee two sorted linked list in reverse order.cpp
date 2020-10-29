struct Node * mergeResult(Node *node1,Node *node2)
{
    stack<int>s1;
    stack<int>s2;
    while(node1!=NULL)
    {
        s1.push(node1->data);
        node1=node1->next;
    }
    while(node2!=NULL)
    {
        s2.push(node2->data);
        node2=node2->next;
    }
    while(!s1.empty() && !s2.empty())
    {
        if(s1.top()>s2.top())
        {
           cout<<s1.top()<<" ";
            s1.pop();
        }else
        {
          cout<<s2.top()<<" ";
            s2.pop();  
        }
    }
    while(!s1.empty())
    {
      cout<<s1.top()<<" ";
        s1.pop();
    }
    while(!s2.empty())
    {
      cout<<s2.top()<<" ";
        s2.pop();
    } 
    return NULL;
    // your code goes here
}
