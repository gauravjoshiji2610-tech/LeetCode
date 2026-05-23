class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long mul=1;
        int num=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0) mul=mul*num;
            mul*=(nums[i]/nums[i]);
        }
        if( mul == 0){
            return 0;
        }
        else if( mul < 0) return -1;
        else return 1;
    }
};