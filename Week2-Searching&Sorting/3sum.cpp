class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n= nums.size();
        if(n<=2){
            return v;
        }
        sort(nums.begin(), nums.end());
        int prev_a = nums[0];
        
        for(int i=0; i<n; i++){
            int a=nums[i];
            vector<int> temp;
            
            if(a!=prev_a || i==0){
                temp.push_back(a);
                int left = i+1;
                int right= n-1;
                
                while(left<right){
                    if(nums[left] + nums[right] < (-a)){
                        left++;
                    }
                    else if((nums[left] + nums[right]) > (-a)){
                        right--;
                    }
                    else{
                        temp.push_back(nums[left]);
                        temp.push_back(nums[right]);
                        v.push_back(temp);
                        temp.clear();
                        
                        temp.push_back(a);
                        left++;
                        while(nums[left]==nums[left-1] && left<right){
                            left++;
                        }
                    }
                }
            }
            prev_a=a;
        }
    return v;
    }
};