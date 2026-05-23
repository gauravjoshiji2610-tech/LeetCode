class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
          vector<int>g;  
        vector<int>v;
        int k;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                
k= nums[i]%10;
v.push_back(k);
nums[i]=nums[i]/10;
            }
            for(int j=v.size()-1;j>=0;j--){
                g.push_back(v[j]);
            }
            v.clear();
        }
        return g;
           }
};