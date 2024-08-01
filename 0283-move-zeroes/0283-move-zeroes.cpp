class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int i=0;
        for( int k=0;k<nums.size();k++)
        {
            if(nums[i]==0)
            {
                i++;
            }
            else
            {
                nums[j]=nums[i];
                
                i++;
                j++;
            }
        }
        while(j<nums.size())
        {
            nums[j]=0;
            j++;
        }
          
    }
};