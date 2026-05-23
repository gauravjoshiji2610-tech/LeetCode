class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 ) return {};
        if(n == 1) return nums;
        vector<int>v,left(n),right(n);
        v.push_back(nums[0]);
        left[0]=INT_MIN;
        
        for(int i =1 ; i<n;i++){
            left[i] = max(left[i-1],nums[i-1]);
        }
right[n-1] = INT_MIN;
        for(int j = n-2; j>=0;j--){
            right[j] = max(right[j+1],nums[j+1]);

        }
for(int k = 1; k<n-1; k++){
    if(nums[k]>left[k] || nums[k] > right[k]){
        v.push_back(nums[k]);
    }
}
        v.push_back(nums[n-1]);
        return v;
    }
};