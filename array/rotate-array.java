class Solution {
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        k=k%n;
        int s=n-k;
        int[] num =new int[s];
        for(int i=0;i<s;i++){
            num[i]=nums[i];
        }
        for(int j=s;j<nums.length;j++){
            nums[j-s]=nums[j];
        }
        for(int l=0;l<s;l++){
            nums[k+l]=num[l];
        }
    }
}