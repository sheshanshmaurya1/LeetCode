class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> help;
        int sum=0;
        int max=INT_MIN;
       for(int i=0; i<accounts.size(); i++){
        for(int j=0; j<accounts[i].size(); j++){
            sum = sum + accounts[i][j];
        }
        help.push_back(sum);
        cout<<endl;
        sum=0;
       }
       
       for(int i=0; i<help.size(); i++){
          if(help[i]>max)
          max=help[i];
       }
       return max;
    }
};