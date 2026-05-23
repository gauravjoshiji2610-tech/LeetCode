class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
v.push_back(l+nums[i]);
l=l+nums[i];
        }
        return v;
    }
};