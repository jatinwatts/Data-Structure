#include <bits/stdc++.h> 
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int * arr= new int[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         int m,a;
         cin>>m;
         sort(arr,arr+n);
         a=arr[m-1]-arr[0];
         for(int i=1;i<=n-m;i++)
         {
            if(arr[i+(m-1)]-arr[i]<a)
            {
                a=arr[i+(m-1)]-arr[i];
            }
         }
         cout<<a<<endl;
     }
	//code
	return 0;
}
