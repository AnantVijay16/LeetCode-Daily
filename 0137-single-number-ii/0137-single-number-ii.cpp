class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i=i+3)
        {
            
            if(i==n-1) return nums[i];
                int j=i+1;
            if(nums[i]!=nums[j])
            {
                return nums[i];
            }
            
        }
        return nums[0];
            

    }
};