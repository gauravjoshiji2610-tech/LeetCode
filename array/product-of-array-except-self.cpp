class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();
int left=1;
int right=1;

vector<int>v(n,1);
for(int i=0;i<n-1;i++){
    left=left*nums[i];
    v[i+1]=v[i+1]*left;

}
for(int j=n-1;j>0;j--){
    right*=nums[j];
    v[j-1]=v[j-1]*right;
}
return v;
    }

};