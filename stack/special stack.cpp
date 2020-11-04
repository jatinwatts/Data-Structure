void push(int a)
{
    s.push(a);
     //add code here.
}

bool isFull(int n)
{
    if(s.size()==n)return true;
    else return false;
    
     //add code here.
}

bool isEmpty()
{
    if(s.empty())return true;
    else return false;
    //add code here.
}

int pop()
{
    s.pop();
    //add code here.
}

int getMin()
{
    int m=s.top();
    stack<int>w;
    while(!s.empty())
    {
        if(s.top()<m)
        {
            m=s.top();
        }
        w.push(s.top());
        s.pop();
    }
    while(!w.empty())
    {
        s.push(w.top());
        w.pop();
    }
    return m;
   //add code here.
}
