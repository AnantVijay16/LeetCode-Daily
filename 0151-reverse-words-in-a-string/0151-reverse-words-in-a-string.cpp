class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        vector<string>v;
        while(ss>>temp)
        {
            v.push_back(temp);
        }
        int n=v.size();
        string ans;
        int i;
        ans=v[n-1];
        for(i=n-2;i>=0;i--)
        {
                ans=ans+" ";
                ans=ans+v[i];
        }
        return ans;
    }
};