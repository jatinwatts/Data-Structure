#include<iostream>
using namespace std;
int expo(int m, int n)
{
	if(n==0){
		return 1;
	}	
	return m*expo(m,n-1);
}
int pow(int m,int n){
	if(n==0){
		return 1;
	}
	if(n%2==0){
		return pow(m*m,n/2);
	}
	return m*pow(m*m,(n-1)/2);
}

int main(){
	int m,n;
	cout<< "enter value";
	cin>>m;
	cout<<"enter power";
	cin>>n;
	cout<<expo(m,n)<<endl<<pow(m,n);
}
