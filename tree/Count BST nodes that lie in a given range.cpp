int getCountOfNode(Node *p, int l, int h)
{
    if(p==NULL){
        return 0;
    }
        int a = getCountOfNode(p->left,l,h);
        int b = getCountOfNode(p->right,l,h);
        if(p->data<=h && p->data>=l){
            return a+b+1;
        }
        return a+b;
}
