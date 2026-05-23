class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        
        int count = 0;
        for(int i = 0; i < n; i++){
            int digicount = 0;
            while(nums[i] != 0){
                digicount++;
                nums[i] = nums[i]/10;

            }
            if(digicount %2 == 0) count++;
        }
        return count;
    }
};