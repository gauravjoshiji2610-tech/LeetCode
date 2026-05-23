class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int>v;
        for(int i = 0;i < n;i++){
            int g = v.size();
            if( index[i] < g){
               
                    v.push_back(0);
                    g = v.size();
                    for(int j = g - 1; j > index[i]; j--){
                    v[j] = v[j-1];
                }
                v[index[i]] = nums[i];
            }


            else            v.push_back(nums[i]);
                
                
        }
        return v;
    }
};