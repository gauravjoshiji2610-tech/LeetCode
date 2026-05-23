class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int>v;
        for(int i=1;i<=m.size()-2;i++){
            if(m[i]>m[i-1] && m[i]>m[i+1]){
v.push_back(i);
            }
        }
return v;
    }
};