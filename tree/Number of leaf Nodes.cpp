int countLeaves(Node* root)
{
    struct Node * temp; 
    queue<Node *> q;
    int x=0;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        if(temp->left==NULL && temp->right==NULL) x++;
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
        q.pop();
    }
    return x;
  // Your code here
}
