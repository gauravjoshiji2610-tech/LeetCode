class Solution {
public:
    bool isPalindrome(string s) {
        string l;
        char cc;
        int n=s.size();
        int i=0;
    for(int i=0;i<n;i++){
            if(s[i]>='A'&& s[i]<='Z'){
cc=s[i]+32;
                l.push_back(cc);
            }
            else if(s[i]>='a'&& s[i]<='z'){
              l.push_back(s[i]);  }
              else if( s[i]>='0'&& s[i]<='9'){
                 l.push_back(s[i]); 
              }

        }
        int m=l.size();
        for(int i=0;i<m/2;i++){
            if(l[i]!=l[m-i-1]){
                return false;
            }


        }
          return true;
    }  
        
};