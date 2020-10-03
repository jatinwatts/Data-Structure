#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,max=INT_MIN,total=0;
          cin>>n;
           int * arr= new int [n];
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
           for(int i=0;i<n;i++)
           {
              total=total+arr[i];
              if(total>max)max=total;
              if(total<0)total=0;
           }
           cout<<max<<endl;
     }
	//code
	return 0;
}
