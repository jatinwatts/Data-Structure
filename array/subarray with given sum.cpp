#include<iostream>
using namespace std;
int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
           int n,x,i;
           cin>>n>>x;
           int * arr=new int [n];
           int sum=0;
           int j=0;
           for(int k=0;k<n;k++){
               cin>>arr[k];
           }
           for (i=0;i<n;i++)
           {
               sum+=arr[i];
               while(sum>x){
                   sum-=arr[j];
                   j++;
               }
               if(sum==x){
                   break;
               }
           }
           if(i==n){
               cout<<-1<<endl;
           }
           else
           cout<<j+1<<" "<<i+1<<endl; 
           
       }
	//code
	return 0;
}
