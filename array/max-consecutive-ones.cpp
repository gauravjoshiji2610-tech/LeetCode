class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,m_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else
            if(count>m_count){
                m_count=count;
                count=0;
            }
        else count=0;

        }
                    if(count>m_count){
                m_count=count;}

return m_count;
    }
};