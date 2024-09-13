class Solution {
public:
    int maxSubArray(vector<int>& arr) {
          int n=arr.size();
          int sum=0;
        int maximum=arr[0];
        for(int i=0;i<n;i++)
        {
            sum =sum +arr[i];
            maximum=max(maximum,sum);
            if(sum<0)
                sum=0;
        }
        return maximum;
    }
};