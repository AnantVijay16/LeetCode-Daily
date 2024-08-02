class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=n/2;
       
        for(int i=0;i<n;i++)
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                    
                }
            }
            if(count>n/2)
            {
                return nums[i];
            }
        }
           return nums[0];
    }
};