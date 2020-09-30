using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         int * arr = new int [n];
         priority_queue<int> pq;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(int i=0;i<=n-k;i++)
         {
             for(int j=i;j<k+i;j++)
             {
                 pq.push(arr[j]);
             }
             cout<<pq.top()<<" ";
             while(!pq.empty())
             {
                 pq.pop();
             }
         }
         cout<<endl;
     }
	//code
	return 0;
}
