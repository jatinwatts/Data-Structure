#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int * arr= new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<1<<" ";
        for(int i=1;i<n;i++)
        {
            a=0;
            for(int j=i;j>=0;j--)
            {
                if(arr[i]>=arr[j])
                {
                    a++;
                }
                if(arr[i]<arr[j])
                {
                    break;
                }
            }
            cout<<a<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
