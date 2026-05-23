class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    mp[nums1[i]]++;
                    break;
                }
            }

        }
        nums1.clear();
    for(auto it : mp){
        if(it.second>0){
nums1.push_back(it.first);
        }
    }
    return nums1;
    }
};