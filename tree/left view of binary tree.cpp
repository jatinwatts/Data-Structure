vector<int> leftView(Node *root)
{
    vector<int> v;
    if(root==NULL)return v;
    struct Node *temp;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        v.push_back(q.front()->data);
        int x= q.size();
        for(int i=0;i<x;i++)
        {
            temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        }
    }
    return v;
   // Your code here
}
