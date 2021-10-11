class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int i=0;
        vector<int> ans;
        for(i=0; i<n-1; i++){
            int f=0;
            for(int j=i+1; j<n; j++){
                if(a[i]<= a[j]){
                    f=1;
                    break;
                }
            }
            if(f==0){
                ans.push_back(a[i]);
            }
        }
        ans.push_back(a[i]);
        return ans;
    }
};

// getting ERROR
// Possibly your code doesn't work correctly for multiple test-cases (TCs).