class Solution {
public:
    string reverseByType(string s) {
     int n=s.size()-1;
        vector<int>v;
        vector<int>p;
    string l=s;
        int i=0;
        
       while( i<=n){
         if(s[i]>='a'&& s[i]<='z'){
               p.push_back(s[i]);
           }
           else{
               v.push_back(s[i]);
           }
           i++;
       }
       int j=p.size()-1;
        int k=v.size()-1;
        
        int g=0;
        while(g<=n){
             if(s[g]>='a' && s[g]<='z'){
                 l[g]=p[j];
                 j--;
                 
        }
            else{
                l[g]=v[k];
                k--;
            }
        g++;
        }
        return l;
    }
};