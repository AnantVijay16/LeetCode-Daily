class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                return i;
            }
        }
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        else return n-1;
    }
};