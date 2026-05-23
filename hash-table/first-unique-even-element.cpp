class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int j=0;j<n;j++){
            if(nums[j]%2==0 && mp[nums[j]]==1){
                return nums[j];
            }
        }
        return -1;
    }
};