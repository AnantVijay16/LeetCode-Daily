class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int p=goal.size();
        if(n!=p)
        {return false;}
        string ds=s+s;
        return strstr(ds.data(), goal.data()) != nullptr;

        
            
        
    
        
        
    }
};