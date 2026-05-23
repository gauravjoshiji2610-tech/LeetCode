class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> mp;
        vector<int>v;
        int n = nums.size();
        int ap = n/3;
        for(int i = 0; i < n; i++){
          
            mp[nums[i]]++;
            
        }
        for(auto it : mp){
            if(it.second > ap) v.push_back(it.first);
        }
        return v;
    }

};