class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
for(int i=0;i<n;i++){
    if(nums[i]<0){
        int p=abs(nums[i])%n;
        int k=abs(i-p+n)%n;
        v.push_back(nums[k]);

    }
    else{
        int q=nums[i];
        int j=(i+q)%n;
        v.push_back(nums[j]);
    }
    
}
return v;
    
    }
};