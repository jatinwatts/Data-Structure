void mirror(Node* p) 
{
    if(p==NULL) return;
    queue<Node *> q;
    q.push(p);
    while(!q.empty())
    {
        struct Node * temp= q.front()->right;
        q.front()->right = q.front()->left;
        q.front()->left= temp;
        if(q.front()->left!=NULL)
        q.push(q.front()->left);
        if(q.front()->right!=NULL)
        q.push(q.front()->right);
        q.pop();
    }
    
     // Your Code Here
}
