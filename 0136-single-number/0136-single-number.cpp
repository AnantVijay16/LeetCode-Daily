class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1) return nums[0];
        for(int i=0;i<n;i=i+2)
        {
            if(i==n-1) return nums[n-1];
            int j=i+1;
            if(nums[i]!=nums[j])
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};