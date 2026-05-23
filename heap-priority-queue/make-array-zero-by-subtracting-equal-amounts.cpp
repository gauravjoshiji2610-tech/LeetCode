class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

int maxi = 0;
int max_i = -1;

for(int i = 0; i < n; i++){
    if(nums[i] > maxi){
         maxi = nums[i];
         max_i = i;
    }
}
 if(max_i == -1) return 0;

       while(nums[max_i] > 0){


            int min_ele = INT_MAX;
            for(int j = 0; j <n; j++){
                if(min_ele > nums[j] && nums[j] > 0) min_ele = nums[j];
            }

            count++;
for(int i = 0; i < n; i++){
    if(nums[i] > 0)
nums[i] -= min_ele;
}
        }
        return count;

    }
};