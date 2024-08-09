class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>nge(n,-1);
         
        
        
            st.push(nums[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(st.size()>0 && st.top()<=nums[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                for(int j=0;j!=i;j++)
                {
                   if(nums[i]<nums[j])
                   {
                       nge[i]=nums[j];
                       break;
                   }
                }
              
                
            }
            else
            {
                nge[i]=st.top();
            }
            st.push(nums[i]);
        }
        while(st.size()>0){
        if(nums[n-1]<st.top())
        {
            nge[n-1]=st.top();
            break;
        }
        else
        {
            st.pop();
        }
        }
           
        return nge;
    }
};