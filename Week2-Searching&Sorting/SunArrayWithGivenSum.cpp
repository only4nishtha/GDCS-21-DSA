class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> ans;
        long long sum=0;
        int start=0;
        
        for(int i=0; i<n; i++){
            
            if(i<n){
                sum= sum + arr[i];
            }
            
            while(sum>s && start<i){
                sum= sum- arr[start++];
            }
            
            if(sum==s){
                ans.push_back(start+1) ;
                ans.push_back(i+1) ;
                return ans;
            }
        }
    }
};

// Possibly your code doesn't work correctly for multiple test-cases (TCs).

// The first test case where your code failed:

// Input:

// 74 665
// 142 112 54 69 148 45 63 158 38 60 124 142 130 179 117 36 191 43 89 107 41 143 65 49 47 6 91 130 171 151 7 102 194 149 30 24 85 155 157 41 167 177 132 109 145 40 27 124 138 139 119 83 130 142 34.................

//  Input is too large 