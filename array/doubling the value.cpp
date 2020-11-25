 {
     long long i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         long long arr[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
            if(arr[i]==k)
             {
                 k=k*2;
             } 
         }

         cout<<k<<endl;
     }
	//code
	return 0;
}
