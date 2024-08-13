class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(target>nums[i] && target<nums[i+1])
            {
                return i+1;
            }   
        }
        if(target<nums[0]) return 0;
        return n;
        
    }
};