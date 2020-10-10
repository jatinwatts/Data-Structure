bool func(Node* a, Node* b){
    if(a==NULL || b==NULL){
        if(a==NULL && b==NULL){
            return true;
        }
        return false;
    }
    bool x = func(a->left,b->right);
    bool y = func(a->right,b->left);
    
    return x && y && (a->data==b->data);
}
int areMirror(Node* a, Node* b) {
    bool ans = func(a,b);
    if(ans){
        return 1;
    }
    return 0;
}
