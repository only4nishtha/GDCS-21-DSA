int firstRepeated(int *arr, int n) {
    for(int i=0;i<n;i++) // select an element
    for(int j=i+1;j<n;j++) //traverse ahead and check for duplicate
        if(arr[i]==arr[j])
          {
            return(i+1);
          }
    return -1;
}

// getting TLE in this code
// OPtimised code shows error when using vector- have ss