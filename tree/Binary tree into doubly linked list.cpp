static queue <Node *> q;
void Inorder(struct Node *p)
    {
        if(p)
        {
            Inorder(p->left);
            q.push(p);
            Inorder(p->right);
        }
    }


Node * bToDLL(Node *root)
{
    if(root == NULL || (root->right==NULL && root->left==NULL))
    {
        return root;
    }
    Inorder(root);
    struct Node * temp;
    struct Node * head=q.front();
        temp=q.front();
        q.pop();
        temp->left=NULL;
        temp->right =q.front();
        q.front()->left =temp;
    while(q.size()!=1)
    {
        temp=q.front();
        q.pop();
        temp->right=q.front();
        q.front()->left=temp;
    }
    q.front()->left = temp;
    q.front()->right =NULL;
    q.pop();
    return head;
}
