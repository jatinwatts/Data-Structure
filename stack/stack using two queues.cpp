void QueueStack :: push(int x)
{
    q1.push(x);
        // Your Code
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q1.empty())return -1;
    int count=0;
    while(!q1.empty())
            {
                count++;
               q2.push(q1.front());
                q1.pop();
            }
            for(int i=0;i<count-1;i++)
            {
               q1.push(q2.front());
                q2.pop(); 
            }
            int x=q2.front();
            q2.pop();
        return x;
        // Your Code       
}
