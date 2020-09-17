#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int n,x,j,k;
        cin>>n;
        int arr[n];
        stack<int> p;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            x=arr[i];
            s.push(x);
        }
        for(int i=0;i<n;i++)
        {
            arr[i];
            s.pop();
            while(!s.empty())
            {
                if(s.top()>arr[i])
                {
                    cout<<s.top()<<" ";
                    break;
                }
                p.push(s.top());
                s.pop();
            }
            if(s.empty()){
                cout<<"-1"<<" ";
            }
            while(!p.empty())
            {
                s.push(p.front());
                p.pop();
            }
        }
        cout<<endl;
     }
	//code
	return 0;
}
