class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        int n=nums.size();
        if(n==2){
             if(nums[0]%2!=0 && nums[1]%2!=0){
                return false;
             }
             if(nums[0]%2==0 && nums[1]%2==0){
                return false;
             }
         return true;}

                for(int i=1;i<=n-2;i++){
        if(nums[i]%2!=0){
            if(nums[i-1]%2!=0 || nums[i+1]%2!=0){
                return false;
            }
        }
        if(nums[i]%2==0){
            if(nums[i-1]%2==0 || nums[i+1]%2==0){
                return false;
            }
        }
        }
        
        return true;
    }

};