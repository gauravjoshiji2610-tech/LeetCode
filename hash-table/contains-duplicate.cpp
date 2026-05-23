class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        s.reserve(nums.size());      // 🔥 optimization
        s.max_load_factor(0.7);      // 🔥 fewer rehashes

        for(int x : nums){
            if(!s.insert(x).second)  // insert + check in one step
                return true;
        }
        return false;
    }
};
