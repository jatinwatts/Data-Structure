#include<iostream>
using namespace std;
int pas(int n ,int r){
	if(r==0||r==n){
		return 1;
	}
	return pas(n-1,r-1)+pas(n-1,r);
}

int main(){
	cout<<pas(7,3);
	return 0;
}
