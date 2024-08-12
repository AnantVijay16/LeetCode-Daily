class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1]!=9)
        {
            digits[n-1]++;
            return digits;
        }
        else
        {
            vector<int>ans;
           
            if(n==1) 
            {
                 ans.push_back(0);
                ans.push_back(1);
                reverse(ans.begin(),ans.end());
                return ans;
            }  
            else
            {
                 int i=n-2;
                if(digits[n-2]!=9)
                {
                    digits[n-2]++;
                    digits[n-1]=0;
                    return digits;
                    
                }
                 digits[n-1]=0;
               while(i>=0 && digits[i]==9)
               {
                  digits[i]=0;
                   i--;
               }
              if(i==-1) 
                {
                  digits.insert(digits.begin(),1,1);
                  return digits;
                }
                else
                {
                    digits[i]++;
                    return digits;
                }   
                
            }
        }
     
    }
};