class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            if(nums[i]==nums[j]) return nums[i];
        }
        return nums[0];
    }
};