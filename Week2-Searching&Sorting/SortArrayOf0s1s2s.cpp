int low=0, high=n-1, mid=0;
    while(mid <= high){
        if(a[mid]==2){
            swap(a[mid], a[high]);
            high--;
        }
        else if(a[mid]==0){
            low++;
            mid++;
        }
        else
            mid++;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

//     Possibly your code doesn't work correctly for multiple test-cases (TCs).

// The first test case where your code failed:

// Input:

// 65754
// 2 0 2 0 0 1 2 2 2 1 1 0 1 1 1 2 0 1 2 1 0 1 2 0 0 0 2 0 1 0 0 0 1 2 1 1 1 2 1 2 1 2 2 1 1 2 0 2 0 0 1 2 1 2 1 1 2 1 2 0 0 1 0 