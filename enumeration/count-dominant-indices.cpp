class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        for(int i=0;i<=n-2;i++){

    float sum = accumulate(nums.begin() + i + 1, nums.end(), 0);
    float avg = sum / (n - i - 1);

        if(nums[i]>avg){
            count++;
        }

            
        }
        return count;
    }
};