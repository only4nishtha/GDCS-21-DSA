class Solution {
public:
    int binary(vector<int>& nums, int target, int l, int r){
        int m= l + (r-l)/2;
        if(l>=r){
            return nums[m]>=target ? l : l+1;
        }
        return nums[m]==target ? m : nums[m]>target ? binary(nums, target, l, m-1) : binary(nums, target, m+1, r);
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int ans = binary(nums, target, 0, nums.size()-1);
        return ans;
    }
};