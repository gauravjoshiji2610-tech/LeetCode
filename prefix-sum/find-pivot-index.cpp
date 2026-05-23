class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int r_sum=0,l_sum=0, n=nums.size(),total=0;
       for(int i=0;i<n;i++){
        total+=nums[i];
       }
       for(int i=0;i<n;i++){
        r_sum=total-l_sum-nums[i];
        if(r_sum==l_sum){
            return i;
        }
        l_sum+=nums[i];

       }

    return -1;
    }
};