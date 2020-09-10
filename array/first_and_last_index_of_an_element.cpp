#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int n,x,j=-1;
        cin>>n;
        int *arr = new int [n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cin>>x;
        for(int i=0;i<n;i++)
        {
            if(x==arr[i])
            {
                if(j==-1)
                cout<<i<<" ";
                j=i;
            }
        }
        cout<<j<<endl;
     }
	//code
	return 0;
}
