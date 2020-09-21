#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k,l=0,n;
        cin>>n;
        int *arr= new int[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            l=0;
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    l++;
                    break;
                }
            }
            if(l==0){
                cout<<arr[i]<<" ";
            }
            
        }
        cout<<endl;
    }
	//code
	return 0;
}
