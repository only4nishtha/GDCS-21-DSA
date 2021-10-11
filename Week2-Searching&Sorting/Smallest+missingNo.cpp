class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) { 
        
        sort(arr, arr+n);
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]>=0){
                if(arr[i]!= ans){
                    
                    if((arr[i+1]!=arr[i]+1)){
                        ans=arr[i]+1;
                        return ans;
                    }
                }
            }
        }
    }
};

//Possibly your code doesn't work correctly for multiple test-cases (TCs).

// The first test case where your code failed:

// Input:

// 85
// -47 1 4 49 -18 10 26 18 -11 -38 -24 36 44 -11 45 20 -16 28 17 -49 47 -48 -33 42 2 6 -49 30 36 -9 15 39 -6 -31 -10 -21 -19 -33 47 21 31 25 -41 -23 17 6 47 3 36 15 -44 33 -31 -26 -22 21 -18 -21 -47 -......

https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/1/