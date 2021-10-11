class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
    	// Complete the function
    	for(int i=0; i<n-1; i++){
    	    if((arr[i]!=0) && (arr[i]==arr[i+1])){
    	        arr[i]= arr[i]*2;
    	        arr[i+1]=0;
    	        i++;
    	    }
    	}
            int count = 0; 
  
            for (int i = 0; i < n; i++){ 
                if (arr[i] != 0){
                    arr[count++] = arr[i];
                }
            }
                while (count < n) 
                    arr[count++] = 0; 
    }
};
