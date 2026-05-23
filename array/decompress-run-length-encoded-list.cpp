class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i =0 ; i<n-1;i=i+2){
            int j = i+1;
            for( int k=0;k<nums[i] ; k++){
                v.push_back(nums[j]);
            }
        }
        return v;


    }
}; 