class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int dp[nums.size()];
        int x= nums.size()-1;
        dp[0]=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            dp[i]= dp[i-1] + nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            if(i==0){
                if(dp[nums.size()-1]-dp[0] == 0)
                    return i;
            }
            else if(i==(nums.size()-1)){
                if(dp[i-1] == 0)
                    return i;
            }
            else{
                if(dp[i-1]==(dp[x]-dp[i]))
                return i;
            }
        }
        return -1;
    }
};