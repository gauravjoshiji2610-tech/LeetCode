class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>mp(101,0);
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(mp[nums[i]]==0){
sum+=nums[i];
            }
            else if(mp[nums[i]] == 1) sum-=nums[i];
mp[nums[i]]++;
        }
        return sum;
    }
};