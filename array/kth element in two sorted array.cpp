#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n,m,k;
	   cin>>n>>m>>k;
	   
	   int* arr1 = new int[n];
	   int* arr2 = new int[m];
	   
	   for(int i=0;i<n;i++){
	       cin>>arr1[i];
	   }
	   for(int i=0;i<m;i++){
	       cin>>arr2[i];
	   }
	   int i=0;
	   int j=0;
	   int p=1;
	   while(i<n && j<m){
	       if(arr1[i]<=arr2[j]){
	           if(p==k){
	               cout<<arr1[i];
	           }
	           i++;
	       }
	       else{
	           if(p==k){
	               cout<<arr2[j];
	           }
	           j++;
	       }
	       p++;
	   }
	   if(i<n && p<=k){
	       cout<<arr1[i+k-p];
	   }
	   if(j<m && p<=k){
	       cout<<arr2[j+k-p];
	   }
	   cout<<endl;
	}
	return 0;
}
