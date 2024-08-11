class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int s=n;
       vector<vector<int>>ans(s,vector<int>(s));
        int a=ans.size();
        int b=ans[0].size();
        int minr=0;
        int maxr=a-1;
        int minc=0;
        int maxc=b-1;
        int p=1;
        int tne=a*b;
        int count=0;
        while(minr<=maxr && minc<=maxc)
        {
            //right
            for(int j=minc;j<=maxc && count<tne;j++)
            {
                ans[minr][j]=p;
                p++;
                count++;
            }
            minr++;
            
            //down
            
            for(int i=minr;i<=maxr && count<tne;i++)
            {
                ans[i][maxc]=p;
                p++;
                count++;
            }
            maxc--;
            
            //left
            
            for(int j=maxc;j>=minc && count<tne; j--)
            {
                ans[maxr][j]=p;
                p++;
                count++;  
            }
            maxr--;
            
            //up
            
            for(int i =maxr;i>=minr && count<tne; i--)
            {
                ans[i][minc]=p;
                p++;
                count++;
            }
             minc++;  
        }
        return ans;
    }
};