class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     int  mini=  *min_element(nums.begin(), nums.end());
     if(mini>1 || mini<0) mini=1;
      unordered_map<int , int >mp;
      int max =*max_element(nums.begin(), nums.end());
      if(max<0) max=1;
      for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
      }
      for(int j=mini;j<=max;j++ ){
        if(mp[j]==0 && j!=0){
            return j;

        }
      }
      return max+1;
      }
    
};