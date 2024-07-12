class Solution {
public:
    bool isPalindrome(int x) {
        int k=x;
        long long ans=0;
        while(k>0)
        {
            int lst=k%10;
            ans=ans*10+lst;
            k=k/10;
        }
        if(ans==x)
        {
return true;
        }
        else
        {
            return false;
        }
    }
       
};