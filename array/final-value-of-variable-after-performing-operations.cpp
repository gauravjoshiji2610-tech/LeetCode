class Solution {
public:
    int finalValueAfterOperations(vector<string> &s) {
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=="X++"|| s[i]=="++X"){
               
                x++;
            }
            else
            x--;
        

    

        }
    return x;
    }
};