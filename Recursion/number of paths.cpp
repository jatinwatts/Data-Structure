#include<iostream>
using namespace std;
int m,n;
int x;
void path(int y,int z)
{
    if(y==m-1 && z==n-1)
    {
        x++;
        return;
    }
    if(y>=m || z>=n)
    {
        return;
    }
    path(y+1,z);
    path(y,z+1);
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {      
         x=0;
         cin>>m>>n;
         path(0,0);
         cout<<x<<endl;
     }
     
	//code
	return 0;
}
