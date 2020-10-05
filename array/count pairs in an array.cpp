#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,count=0;
         cin>>n;
         int * arr = new int [n];
         for(int i=0;i<n;i++)
         cin>>arr[i];
         for(int i=1;i<n;i++)
         {
             for(int j=i+1;j<n;j++)
             {
                 if(i*arr[i] > j*arr[j])
                 {
                     count++;
                 }
             }
         }
         cout<<count<<endl;
     }
	//code
	return 0;
}
