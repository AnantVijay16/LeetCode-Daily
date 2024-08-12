class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
       
        string ans;
        for(int i=0;i<n;i++)
        {
            int x=(int)s[i];
            if(  (x<=122 && x>=97) || (x<=57) && (x>=48) || (x<=90) && (x>=65))
                ans.push_back(s[i]);
        }
        
        for (auto& x : ans) { 
        x = tolower(x); 
    }
        int p=ans.size();
        int i=0;
        int j=p-1;
        while(i<=j)
        {
            if(ans[i]==ans[j])
            {
                i++;
                j--;
                
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
        
    }
};