class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans;
         int n =nums2.size();
        int nge[n];
        nge[n-1]=-1;
        st.push(nums2[n-1]);
        if(nums2.size()==1) nge[0]=-1;
        for(int i=n-2;i>=0;i--)
        {
            while(st.size()>0 && st.top()<=nums2[i])
            {
                st.pop();
                
            }
            if(st.size()==0) nge[i]=-1;
            else
            {
                nge[i]=st.top();
                
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
          
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(nge[j]);
                    break;
                }
            }
        
        
        }
        return ans;
        
    }
};