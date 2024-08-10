class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m =matrix[0].size();
        
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                   v.push_back(i);
                    v.push_back(j);
                }
            } 
        }
        
                int s =v.size();
        for(int r=0;r<s;r=r+2)
        {
                    int p=v[r];
                    int q=0;
                    while(q<m)
                    {
                        matrix[p][q]=0;
                        q++;
                    }
                    
                    int a=0;
                    int b=v[r+1];
                    while(a<n)
                    {
                        matrix[a][b]=0;
                        a++;
                    }
                    
        }
    }
};