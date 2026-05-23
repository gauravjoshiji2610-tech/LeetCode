class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*
      Brute force
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};*/
// Optimal Approacch
int n=nums.size();
unordered_map<int ,int> mp;

for(int i=0;i<n;i++){
int g=target-nums[i];
if(mp.find(g)!=mp.end()){
    return{ mp[g],i};


}
mp[nums[i]]=i;
}
return{};
    }
};
