using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,j=0;
         cin>>n;
         int *arr = new int[n];
         for (int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==i+1)
            {
                cout<<arr[i]<<" ";
                j++;
            }
         }
         if(j==0)cout<<"Not Found";
         cout<<endl;
     }
	//code
	return 0;
}
