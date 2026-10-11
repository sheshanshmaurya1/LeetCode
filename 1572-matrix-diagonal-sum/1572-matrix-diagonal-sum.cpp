class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0; i<mat.size(); i++){
            sum=sum+mat[i][i];//for D1
            sum=sum+mat[i][(mat.size()-i-1)]; //for D2
        }       
        if(mat.size()&1) // logical &
        sum=sum-(mat[(mat.size()-1)/2][(mat.size()-1)/2]);
        
        return sum;
    }
};