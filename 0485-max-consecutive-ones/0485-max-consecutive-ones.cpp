class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> help(nums.size(),0);
        for(int i=0,j=0; i<nums.size() && j<nums.size(); i++){
             if(nums[i]==1)
                help[j]++;
                else
                j++;
        
        }
        int max=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(help[i]>=max){
            max=help[i];
            }
        }
        return max;
    }
};

