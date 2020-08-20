#include<iostream>
using namespace std;
class diagonal
{
	private:
		int n;
		int *p;
	public:
		diagonal(int n)
			{
				this->n = n;
				p=new int [n];
			}
		void set (int i, int j,int x);
		int get(int i, int j);
		void display();
		~diagonal(){
			delete []p;
		}
};

void diagonal :: set(int i,int j ,int x){
	if(i==j){
		p[i-1]=x;
	}
}
int diagonal::get(int i,int j){
	if(i==j)return p[i-1];
	else return 0;
}

void diagonal :: display(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;i++){
			if(i==j)
			cout<<p[i-1];
			else {
			cout<<0;}
		}
		cout<<endl;
	}
}
