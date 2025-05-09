// problem link : https://leetcode.com/problems/score-after-flipping-matrix/description/
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0] == 0){
                for(int j=0;j<m;j++){
                    if(grid[i][j] == 0){
                        grid[i][j] =1;
                    }
                    else{
                        grid[i][j] =0;
                    }
                }
            }
        }
        for(int col=0;col<m;col++){
            
            int count0 =0,count1=0;
            for(int row=0;row<n;row++){
                if(grid[row][col] == 1){
                    count1++;
                }
                else{
                    count0++;
                }
            }
            if(count0>count1){
                for(int row=0;row<n;row++){
                    if(grid[row][col] == 1){
                        grid[row][col] = 0;
                    }
                    else{
                        grid[row][col] = 1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            // ans =0;
            for(int j=0;j<m;j++){
                ans += (1<<(m-1-j))*grid[i][j];
            }
        }
        
        return ans;
    }
};
