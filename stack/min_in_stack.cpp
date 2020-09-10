int _stack :: getMin()
{
    stack<int>q;
    if(s.empty())
    return -1;
        int x=s.top();
        while(!s.empty())
        {
            if(x>s.top())
                x=s.top();
            q.push(s.top());
            s.pop();
        }
        while(!q.empty()){
            s.push(q.top());
            q.pop();
        }
        return x;
   //Your code here
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty())
    return -1;
        int x=s.top();
        s.pop();
        return x;
   //Your code here
}

/*push element x into the stack*/
void _stack::push(int x)
{
    s.push(x);
   //Your code here
}
