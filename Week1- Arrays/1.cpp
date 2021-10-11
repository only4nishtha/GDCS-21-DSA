class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        int a[n];
        int pos=0;
        for(int i=d; i<n; i++){
            pos= i-d;
            a[pos] = arr[i];
        }
        pos++;
        for(int i=0; i<d; i++){
            a[pos]=arr[i];
            pos++;
        }
        pos=0;
        for(int i=0; i<n; i++){
            arr[i]=a[pos];
            pos++;
        }
        
    }
};