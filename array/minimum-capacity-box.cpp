class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        
int max= INT_MAX;
int count=0;
int min;

        for(int i=0;i<n;i++){
            if(capacity[i]>=itemSize){  
            if (capacity[i]<max){
max=capacity[i];
        min=i;
        count++;
        }
        }
        }
        if (count == 0) return -1;
        return min;
    }
};