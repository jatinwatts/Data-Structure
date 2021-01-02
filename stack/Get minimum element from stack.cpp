#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
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
