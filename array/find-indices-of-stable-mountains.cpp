class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int t) {
        vector<int>v;
        int n=height.size();
        for(int i=0;i<n-1;i++){
            if(t<height[i]){
                v.push_back(i+1);
            }
        }
        return v;
    }
};