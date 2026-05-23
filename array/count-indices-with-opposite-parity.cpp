class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector< int > answer(n,0);
        if(n == 1) return answer;
        
        for(int i = 0; i < n; i++){
            int count = 0;
                for(int j = i+1; j<n; j++){
            if(nums[i] %2 ==0){
                    if(nums[j] % 2 !=0) count++;
                }
                
            
                else{
                    if(nums[j] % 2 ==0) count ++;
                }
                }
            answer[i] = count;
            
                
            }
        return answer;
    }
};