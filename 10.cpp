class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n= a.size();
        vector<int> ans(2, -1);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] + a[j] == target){
                    ans[0] = i;
                    ans[1] = j; 
                }
            }
        }
        return ans;
    }
};