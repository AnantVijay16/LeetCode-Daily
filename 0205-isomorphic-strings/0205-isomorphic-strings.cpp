class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int x=s.size();
        int y=t.size();
        if(x!=y) return false;
        else{
            vector<int>arr(150,1000);
            for(int i=0;i<x;i++)
            {
                char ch=s[i];
                char dg=t[i];
                int ascii1 =(int)ch;
                int ascii2=(int)dg;
                if(arr[ascii1]==1000){
                arr[ascii1]=ascii1-ascii2;}
                else if(arr[ascii1]!=ascii1-ascii2) return false;
            }
            
            for(int i=0;i<150;i++)
            {
                arr[i]=1000;
            }
            for(int i=0;i<x;i++)
            {
                char ch=s[i];
                char dg=t[i];
                int ascii1 =(int)ch;
                int ascii2=(int)dg;
                if(arr[ascii2]==1000){
                arr[ascii2]=ascii1-ascii2;}
                else if(arr[ascii2]!=ascii1-ascii2) return false;
            }
            return true;
        }
        
    }
};