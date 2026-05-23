class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi = 0;
        string s;
        for(int i = 0 ;i< sentences.size(); i++){
            s = sentences[i];
            int count = 1 ;
            for(int j = 0; j< s.size();j++){

                if(s[j]==' ') count ++;
            }
            if(count>maxi) maxi = count ;

        }
        return maxi;
    }
};