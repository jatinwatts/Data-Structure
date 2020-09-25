#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int m,n;
         cin>>m>>n;
         queue<pair<int,int>> q;
         pair<int,int>p;
         int ** arr= new int *[m];
         for(int i=0;i<m;i++)
         {
             arr[i]=new int[n];
         }
         for(int i=0;i<m;i++)
         {
              for(int j=0;j<n;j++)
              {
                  cin>>arr[i][j];
                  if(arr[i][j]==1)
                  {
                      p.first=i;
                      p.second=j;
                      q.push(p);
                  }
              }
         }
         while(!q.empty())
         {
             pair<int,int> x=q.front();
             for(int i=0;i<m;i++)
             {
                 if(arr[i][x.second]==0)
                 {
                    arr[i][x.second]=1; 
                 }
             }
             for(int i=0;i<n;i++)
             {
                 if(arr[x.first][i]==0)
                 {
                    arr[x.first][i]=1; 
                 }
             }
             q.pop();
         }
         for(int i=0;i<m;i++)
         {
              for(int j=0;j<n;j++)
              {
                  cout<<arr[i][j]<<" ";
              }
              cout<<endl;
         }
         
     }
	//code
	return 0;
}
