class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int>a;
        a=score;
        sort(a.rbegin(),a.rend());
        vector<string>ans;
        if(n==1) 
        {
            ans.push_back("Gold Medal");
            return ans;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(score[i]==a[j])
                {
                    if(j==0) 
                    {
                        ans.push_back("Gold Medal");
                        break;
                    }
                     if(j==1) 
                    {
                        ans.push_back("Silver Medal");
                        break;
                    }
                     if(j==2) 
                    {
                        ans.push_back("Bronze Medal");
                        break;
                    }
                    int x=j+1;
                    string s=to_string(x);
                    ans.push_back(s);
                    
                }
            }
            
            
        }
        return ans;
    }
};