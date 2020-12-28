#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,min=INT_MAX;
         cin>>n;
         int *arr = new int [n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         sort(arr,arr+n);
         for(int i=1;i<n;i++)
         {
             if(arr[i]-arr[i-1]<min)
             {
                 min=arr[i]-arr[i-1];
             }
         }
         cout<<min<<endl;
     }
	//code
	return 0;
}
