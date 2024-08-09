class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0) return 0;
        int i=0;
        for(i;i<n;i++)
        {
            if(val==nums[i])
            {
                break;
            }    
            
        }
        int j=i+1;
        for(j;j<n;j++)
        {
            if(nums[j]!=nums[i])
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return i;
    }
};