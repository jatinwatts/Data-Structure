using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
       long long n;
    cin>>n;
    long long* arr = new long long[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long i=0;i<n;i++){
        arr[i]=arr[i]+(arr[arr[i]]%n)*n;
    }
    for(long long i=0;i<n;i++){
        cout<<arr[i]/n<<" ";
    }  
    cout<<endl;
     }
     
    
	return 0;
}
