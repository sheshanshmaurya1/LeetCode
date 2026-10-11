class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                if(i==j)
                    sum=sum+mat[i][j];    
                if(i==((mat.size()-1)-j))
                    sum=sum+mat[i][j];  //   When the condition is true, you should add mat[i][j], not calculate the column index again. so sum = sum + mat[i][((mat.size()-1)-j)]; is wrong for line no.10.
            }
        }
        if(mat.size()%2 != 0)
        sum=sum-(mat[(mat.size()-1)/2][(mat.size()-1)/2]);
        return sum;
    }
};