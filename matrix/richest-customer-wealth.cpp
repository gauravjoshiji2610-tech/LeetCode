class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int sum = 0;
        int max = INT_MIN;
    for(int i = 0; i < n ; i++){
for(int j = 0; j<accounts[0].size();j++){
     sum +=accounts[i][j];

}
if(max<sum) max = sum;
sum=0;
    }
    return max;
    }
};