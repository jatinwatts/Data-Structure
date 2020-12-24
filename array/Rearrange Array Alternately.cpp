using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int* arr = new int[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         int i=0;
         int j=n-1;
         while(i<=j){
             if(i==j){
                 cout<<arr[i];
                 break;
             }
             cout<<arr[j]<<" "<<arr[i]<<" ";
             i++;
             j--;
         }
         cout<<endl;
     }
	//code
	return 0;
}
