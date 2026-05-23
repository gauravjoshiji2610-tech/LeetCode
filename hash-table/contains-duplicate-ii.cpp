class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int>mp;
        for(int i = 0; i<n ; i++){
            if(mp[nums[i]]!=0){
                int j = mp[nums[i]]-1;
                if(abs(i-j)<=k) return true;
            }
            mp[nums[i]]=i+1;
        }
        return false;
    }
};