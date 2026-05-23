class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       int count=0;
       if(k==1) return 0;
       for(int i = 0; i < nums.size(); i++){
        int j = k - nums[i];
        if(j<0) continue;
        if(mp.find(j)!=mp.end()){
if(mp[j]>0) {
    count++;
            mp[j]--;
        }
        else mp[nums[i]]++;
        }
        else mp[nums[i]]++;
       } 
       return count;
    }
};