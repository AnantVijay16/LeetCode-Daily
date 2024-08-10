class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j =i+1;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int s=0;s<n;s++)
        {
            int i=0;
            int j=m-1;
            while(i<=j)
            {
                swap(matrix[s][i],matrix[s][j]);
                i++;
                j--;
            }
        }
        
        
    }
};