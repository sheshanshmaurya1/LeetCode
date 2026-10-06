class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> help=nums;
        k=k%nums.size();
        
        for(int i=0; i<k; i++){
            nums[i]=help[nums.size()-k+i];
        }
        for(int i=0; i<nums.size()-k; i++){
            nums[i+k]=help[i];
        }
        
    }
};