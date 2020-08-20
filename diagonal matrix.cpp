#include <bits/stdc++.h>
using namespace std;



int main(){
	int k,j,n;
	cout<<"Enter size of a diagonal matrix:"<<endl;
	cin>>k;
	int a[k];
	cout<<"enter values in a matrix: "<<endl;
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	cout<<"enter index to see its value"<<endl;
	cout<<"row index:"<<endl;
	cin>>j;
	cout<<"column index"<<endl;
	cin>>n;
	if(j==n){
		cout<<a[n];
	}else
	cout<<0;
	return 0;
}
