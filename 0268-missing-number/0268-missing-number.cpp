class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n+1;i++)
        {
            ans.push_back(i);
        }
        int m=ans.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
            {
                if(nums[i]==ans[i])
                {
                    continue;
                }
            else
            {
                return ans[i];
            }
            }
        return ans[m-1];
    }
};