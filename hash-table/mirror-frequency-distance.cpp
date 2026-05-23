class Solution {
public:
    int mirrorFrequency(string s) {
       int n=s.size();
        unordered_map<char , int >mp;
        for(int i = 0; i<n;i++){
            mp[s[i]]++;
        }
        int sum=0;
        
        for(int j=0;j<n;j++){
            char c = s[j];
            if (c >= '0' && c <= '9'){
              char m = '0' + '9' - c;
                  int fc=0,fm = 0;
            if( mp[c]> 0){
                fc=mp[c];
            mp[c]=0;}
            if( mp[m]>0) {
                fm = mp[m];
            mp[m]=0;}
               
            int minus = max(fc,fm)- min(fc,fm);
            sum = sum + minus;
                
            }
            else{
          char m = 'a' + 'z' - s[j];
            int fc=0,fm = 0;
            if( mp[c]> 0){
                fc=mp[c];
            mp[c]=0;}
            if( mp[m]>0) {
                fm = mp[m];
            mp[m]=0;}
             int minus = max(fc,fm)- min(fc,fm);
            sum = sum + minus;
                
            
        }
        }
        return sum;
    }
};