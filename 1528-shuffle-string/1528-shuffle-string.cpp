class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        string ans(n,0);
        for(int i=0;i<n;i++)
        {
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};