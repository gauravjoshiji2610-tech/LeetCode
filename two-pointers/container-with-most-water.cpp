class Solution {
public:
    int maxArea(vector<int>& height) {
        


      
        
        int n = height.size();
        if (n==2) return min(height[0], height[1]) * 1;
        int maxi = INT_MIN;
        int i =0;
int k = n-1;
        while(i < n && k > 0){
        
            int width = k - i;
            int temp = min(height[i],height[k]) * width;
            maxi = max(maxi,temp);
            if(height[k] > height[i]) i++;
            else k--;
            

        }
        
        return maxi;
    



    }
};