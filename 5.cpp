class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int no;
        int flag=1;
        int diff= INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]<x){
                if(x-arr[i] < diff){
                    diff= x- arr[i];
                    no= arr[i];
                }
                flag=0;
            }
        }
        if(flag==1){
            return -1;
        }
        else
            return no;
        
    }