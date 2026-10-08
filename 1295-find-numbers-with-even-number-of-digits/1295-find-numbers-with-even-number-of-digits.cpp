class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        vector<int> help(nums.size());
        for(int i=0; i<nums.size(); i++){
            help[i]=0;
           for(int j=i; j>=0; j++){
               nums[i]=nums[i]/10;
               help[i]++;
               if(nums[i]<=0)
               break;
           }
        }
        for(int i=0; i<nums.size(); i++){
            if(help[i]%2==0)
            count++;
        }
        return count;
    }
};