class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int x,y;
        int * arr1 =new int [n];
        memset(arr1, 0, sizeof(arr1));
        for(int i=0;i<n;i++)
        {
            arr1[arr[i]-1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(arr1[i]==0)
            {
                x=i+1;
            }
            if(arr1[i]==2)
            {
                y=i+1;
            }
        }
        int * arr2 = new int [2];
        arr2[0]=y;
        arr2[1]=x;
        return arr2;
        // code here
    }
};
