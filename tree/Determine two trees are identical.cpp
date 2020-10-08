int Height(struct Node *root)
{
 int x=0,y=0;
 if(root==0)
 return 0;
 x=Height(root->left);
 y=Height(root->right);
 if(x>y)
 return x+1;
 else
 return y+1;

}
bool isIdentical(Node *r1, Node *r2)
{
    queue<Node *> q1,q2;
    struct Node * temp1;
    struct Node * temp2;
    if(r1!=NULL)
    q1.push(r1);
    if(r2!=NULL)
    q2.push(r2);
    while(!q1.empty() && !q2.empty())
    {
        temp1=q1.front();
        temp2=q2.front();
        if((temp1->data != temp2->data) || Height(r1->left)!=Height(r2->left) || Height(r1->right)!=Height(r2->right))
        return 0;
        if(temp1->left!=NULL)
        q1.push(temp1->left);
        if(temp1->right!=NULL)
        q1.push(temp1->right);
        if(temp2->left!=NULL)
        q2.push(temp2->left);
        if(temp2->right!=NULL)
        q2.push(temp2->right);
        q1.pop();
        q2.pop();
    }
    if(q1.size()==q2.size())return 1;
    else return 0;
    //Your Code here
}
