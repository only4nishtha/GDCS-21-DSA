class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxans=nums[0], n=nums.size();
        for(int i=0; i<n; i++){
            sum= sum+ nums[i];
            maxans= max(maxans, sum);
            sum= max(sum, 0);
        }
        return maxans;
    }
};