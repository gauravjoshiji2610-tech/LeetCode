class Solution {
public:
    int minimumDistance(vector<int>& nums) {
      int n = nums.size();
      int mini=-1;
      for(int i =0 ; i<n ; i++){
        for(int j = i+1 ;j<n;j++){
            for(int k=j+1;k<n;k++){
                
                if(nums[i] == nums[j] && nums[j] == nums[k]){
                  int  l= abs(i - j) + abs(j - k) + abs(k - i);
                    if(mini>l || mini<0) mini = l;
                
                }
            }
        }
      } 
      return mini; 
    }
};