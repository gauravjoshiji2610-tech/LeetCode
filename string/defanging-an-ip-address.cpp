class Solution {
public:
    string defangIPaddr(string s) {
        string v;
        for(int i =0;i<s.size(); i++){
            
            if(s[i]=='.'){
                v.push_back('[');
                  v.push_back(s[i]);
                v.push_back(']');
                continue;
            }
            v.push_back(s[i]);
        }
        return v;
    }
};