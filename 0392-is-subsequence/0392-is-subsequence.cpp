class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n =s.size();
        int m = t.size();
        string p;
        int j=0;
        for(int i=0;i<m;i++)
        {
            if(t[i]==s[j])
            {
                p.push_back(t[i]);
                j++;
            }
        }
        if(p==s) return true;
        else
        {
            return false;
        }
    }
};