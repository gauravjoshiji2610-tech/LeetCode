class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=0;
        for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;

        }
        for(auto it : mp){
            if(it.second>1){
                n= it.first;
                break;
            }
        }
    return n;
}
};