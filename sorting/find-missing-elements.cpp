class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int min=nums[0];
        int max=nums[n-1];
        while(min<max){
             bool t=false;
            for(int i=0;i<n;i++){
                if(min==nums[i]) {
                    t=true;
                    break;
                            }
            }
        if(t==false) v.push_back(min);

        min++;
        }
      return v;  
    }
};