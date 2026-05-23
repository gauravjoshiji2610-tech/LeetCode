class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int i=0, j = 1;
    int n = nums.size();
    vector<int>v(n);
    
    for(int k = 0; k<n; k++){
        if( i<=n-2 ||  j<=n-1){
        if(nums[k]>0){
            v[i]=nums[k];
            i = i + 2;
        }
        else{
            v[j]=nums[k];
            j = j + 2;
        }
        }
    }
      return v;  
    }
};