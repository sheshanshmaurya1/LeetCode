class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        int sum=0; 
        
        for(int i=0,j=0; i<nums.size() && j<nums.size(); i++,j++){
            ans[j]=nums[i];
            sum=ans[j]+sum;
            ans[j]=sum;
        }
        return ans;
    }
};