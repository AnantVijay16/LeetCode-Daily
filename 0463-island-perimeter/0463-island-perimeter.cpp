class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    sum=sum+4;
                    if(i<n-1 && grid[i+1][j]==1)
                    {
                        sum=sum-2;
                    }
                    
                    if(j<m-1 && grid[i][j+1]==1)
                    {
                        sum=sum-2;
                    }   
                    
                }
                      
            }
        }
            
            
           return sum; 
            
            
    }
};