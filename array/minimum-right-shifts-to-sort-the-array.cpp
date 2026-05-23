class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        int count =0;
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
count++;
index=i;
            }
        }  
        if(count>1) return -1;
        if(count==0) return 0;

        return n-index-1;
    }
};